from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


strings = input("Enter the list of strings (comma separated): ").strip().split(',')
substring = input("Enter the substring to filter by: ").strip()
print(filter_by_substring([x.strip() for x in strings], substring))