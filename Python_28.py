from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

# Read input from the user
input_strings = input("Enter space-separated strings: ").split()
result = concatenate(input_strings)
print(result)