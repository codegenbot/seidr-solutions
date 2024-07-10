```
from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    result = ', '.join(map(str, strings))
    return result

print(concatenate(['hello', 'world']))