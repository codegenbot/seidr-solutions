```
from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    try:
        result = ', '.join(map(str, strings))
    except Exception as e:
        print(f"Error: {e}")
        result = "Invalid input"
    return result

print(concatenate([]))