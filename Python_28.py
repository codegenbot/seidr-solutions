```
from typing import List

def concatenate(strings: List[str]) -> str:
    return ', '.join(strings)

print(concatenate(input("Enter strings (comma separated): ").split(',')))