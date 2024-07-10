```
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s and s.strip()]


strings = input("Enter the list of strings (comma separated): ").strip().split(",")
strings = [x for x in strings if x]  
substring = input("Enter the substring to filter by: ").strip()
print(filter_by_substring(strings, substring))