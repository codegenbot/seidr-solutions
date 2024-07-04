from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

# Read multiple lines input from the user
import sys
input_strings = []
for line in sys.stdin:
    input_strings.append(line.strip())

result = concatenate(input_strings)
print(result)