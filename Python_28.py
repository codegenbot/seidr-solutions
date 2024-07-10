from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    result = ', '.join(map(str, [s for s in strings if isinstance(s, str)]))
    return result

print(concatenate([]))