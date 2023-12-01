from typing import List

def concatenate(strings: List[str]) -> str:
    return "".join(strings)

# Read input
strings = input().split()

# Call the function and print output
print(concatenate(strings))