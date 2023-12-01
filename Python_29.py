from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

input_strings = input().split()
input_prefix = input()

output = filter_by_prefix(input_strings, input_prefix)
output