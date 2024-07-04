from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

import sys
input_strings = []
for line in sys.stdin:
    input_strings.append(line.strip())

result = concatenate(input_strings)
print(result)