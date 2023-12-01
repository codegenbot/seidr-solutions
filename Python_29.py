from typing import List
import sys

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

input_strings = sys.argv[1:-1] 
input_prefix = sys.argv[-1]

output = filter_by_prefix(input_strings, input_prefix)
output