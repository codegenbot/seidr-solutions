```
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s and s.strip()]


strings = input("Enter the list of strings (comma separated): ").strip().split(",")
substring = input("Enter the substring to filter by: ").strip()

filtered_strings = [s for s in strings if s and substring]

print(filter_by_substring(filtered_strings, substring))