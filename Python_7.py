```
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s and s.strip()]


strings = []
while not strings:
    try:
        strings = [x.strip() for x in input("Enter the list of strings (comma separated): ").strip().split(",")]
    except ValueError:
        print("Invalid input. Please enter comma-separated strings.")

substring = ''
while not substring:
    try:
        substring = input("Enter the substring to filter by: ")
    except ValueError:
        print("Invalid input. Please enter a valid substring.")
print(filter_by_substring(strings, substring))