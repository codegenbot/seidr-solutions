```
from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    return ', '.join(map(str, strings))

print(concatenate(input("Enter space-separated strings: ").split()))