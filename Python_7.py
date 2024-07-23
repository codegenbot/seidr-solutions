```
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring.lower() in s.lower()]


input_type = input("Enter 'c' for comma-separated or 's' for single-string per line: ")

if input_type == 'c':
    input_str = input(
        "Enter a list of strings (separated by commas): "
    )
    strings_list = [x.strip().lower() for x in input_str.split(",")]
else:
    input_str = input("Enter a list of strings (single-string per line): ")
    strings_list = [
        x.strip().lower() for x in input_str.split()
    ]

substring = input("Enter a substring to search for: ").strip().lower()

result = filter_by_substring(strings_list, substring)
print(result)