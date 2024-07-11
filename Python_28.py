```
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

strings = input("Enter strings separated by comma: ")
list_strings = [s.strip() for s in strings.split(',')]
print(concatenate(list_strings))