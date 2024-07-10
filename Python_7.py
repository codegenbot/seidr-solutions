from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


strings = input("Enter the list of strings (comma separated): ").strip().split(",")
strings = [x.strip() for x in strings]
print(filter_by_substring(strings, input("Enter the substring to filter by: ").strip()))