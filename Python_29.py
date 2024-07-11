from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> None:
    filtered_strings = [s for s in strings if s.startswith(prefix)]
    print(*filtered_strings, sep="\n")
    if not filtered_strings:
        print("No strings match the given prefix.")


num_strings = int(input("Enter number of strings: "))
while True:
    try:
        if num_strings <= 0:
            raise ValueError
        break
    except ValueError:
        print("Please enter a positive integer.")
strings = [input() for _ in range(num_strings)]
prefix = input("Enter prefix: ")
while True:
    try:
        if len(prefix) == 0:
            raise ValueError
        break
    except ValueError:
        print("Please enter a non-empty prefix.")
filter_by_prefix(strings, prefix)