from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

import sys
input_strings = [line.strip() for line in sys.stdin]
result = concatenate(input_strings)
print(result)