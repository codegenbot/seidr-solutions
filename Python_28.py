from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

input_strings = input("Enter space-separated strings: ").split()
result = concatenate(input_strings)
print(result)