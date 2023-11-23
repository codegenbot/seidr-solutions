from typing import List
import sys

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = sys.argv[1].split(",")
prefix = sys.argv[2]

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)