import sys
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = sys.stdin.readlines()
prefix = strings[-1].strip()
strings = strings[:-1]

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)