from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> None:
    filtered_strings = [s for s in strings if s.startswith(prefix)]
    print(*filtered_strings, sep="\n")
    if not filtered_strings:
        print("No strings match the given prefix.")


try:
    num_strings = int(input("Enter number of strings: "))
except ValueError:
    print("Invalid input! Please enter an integer.")
num_strings = 0

if num_strings > 0:
    strings = [input() for _ in range(num_strings)]
else:
    print("Please enter a positive integer.")

try:
    prefix = input("Enter prefix: ")
except ValueError:
    print("Invalid input! Please enter a string.")
if not prefix:
    print("Please enter a non-empty prefix.")
else:
    filter_by_prefix([str(x) for x in strings], str(prefix))