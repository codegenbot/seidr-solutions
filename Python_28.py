from typing import List

def concatenate(strings: List[str]) -> str:
    result = ''.join(strings)
    return result

input_strings = input().split(',')
output = concatenate(input_strings)
print(output)