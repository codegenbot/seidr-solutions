from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


strings = input("Enter the list of strings (comma separated): ").split(',')
substring = input("Enter the substring to filter by: ")
print(filter_by_substring(strings, substring))