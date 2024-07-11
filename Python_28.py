```
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(s for s in strings if s)

user_input = input("Enter a list of strings (comma-separated): ")
strings = [s.strip() for s in user_input.split(",")]
print(concatenate(strings))