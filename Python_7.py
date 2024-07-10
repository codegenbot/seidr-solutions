```
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s.strip() for s in strings if substring in s]


strings = [x.strip() for x in input("Enter the list of strings (comma separated): ").strip().split(",")]
substring = input("Enter the substring to filter by: ").strip()
print(filter_by_substring(strings, substring))