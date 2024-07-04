from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

input_strings = [line for line in iter(input, '')]
result = concatenate(input_strings)
print(result)