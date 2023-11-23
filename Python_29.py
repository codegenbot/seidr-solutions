import sys
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = sys.stdin.readline().strip().split(",")
prefix = sys.stdin.readline().strip("\"")

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)