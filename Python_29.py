```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> None:
    filtered_strings = [s for s in strings if s.startswith(prefix)]
    print(*filtered_strings, sep="\n")
    if not filtered_strings:
        print("No strings match the given prefix.")


try:
    while True:
        try:
            num_strings = int(input("Enter number of strings (integer): "))
            break
        except ValueError:
            print("Invalid input! Please enter an integer.")
except Exception as e:
    print(f"An error occurred: {e}")
    exit(1)

strings = [input() for _ in range(num_strings)]
try:
    while True:
        prefix = input("Enter prefix (string): ")
        if not isinstance(prefix, str):
            print("Please enter a string.")
        else:
            break
except Exception as e:
    print(f"An error occurred: {e}")
    exit(1)
filter_by_prefix([str(x) for x in strings], prefix)

while True:
    try:
        filter_by_prefix([str(x) for x in strings], prefix)
        repeat = input("Do you want to filter again? (yes/no): ")
        if repeat.lower() != 'yes':
            break
    except Exception as e:
        print(f"An error occurred: {e}")
        exit(1)