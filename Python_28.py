from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

input_str = input()
strings = input_str.split()
result = concatenate(strings)
print(result)