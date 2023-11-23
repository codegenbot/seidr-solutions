import sys
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


strings = sys.stdin.readline().strip().split()
substring = sys.stdin.readline().strip()
result = filter_by_substring(strings, substring)
print(result)