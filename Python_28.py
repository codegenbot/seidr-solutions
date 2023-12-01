from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

# Read input
strings = input().split()

# Call the concatenate function with the input list
result = concatenate(strings)

# Print the result
print(result)