from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


strings = input("Enter the strings (separated by comma): ").split(", ")
substring = input("Enter the substring: ")
result = filter_by_substring(strings, substring)
print(result)