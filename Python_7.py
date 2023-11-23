from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


strings = raw_input().split()
substring = raw_input()
result = filter_by_substring(strings, substring)
print(result)