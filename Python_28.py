from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

# Read multiple lines input from the user with the first line as count
n = int(input())
input_strings = [input() for _ in range(n)]

result = concatenate(input_strings)
print(result)