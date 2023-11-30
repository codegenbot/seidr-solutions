from typing import List
import sys


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [string for string in strings if string.startswith(prefix)]


strings = sys.stdin.readline().strip().split(",")
prefix = sys.stdin.readline().strip()

filtered_strings = filter_by_prefix(strings, prefix)
print(filtered_strings)