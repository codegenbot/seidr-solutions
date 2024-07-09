```
from typing import List

def concatenate(strings: List[str]) -> str:
    result = ''
    for string in strings:
        result += string
    return result

strings = input("Enter space-separated strings: ").split()
print(concatenate(strings))