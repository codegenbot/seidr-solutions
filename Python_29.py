from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

import sys

# Read input from command line
input_strings = sys.stdin.readline().strip().split()
input_prefix = sys.stdin.readline().strip()

output = filter_by_prefix(input_strings, input_prefix)
output