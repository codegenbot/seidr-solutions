from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]


strings = input().strip().split()
substring = input()
result = filter_by_substring(strings, substring)
print(result)