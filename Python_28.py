from typing import List

def concatenate(strings: List[str]) -> str:
    result = []
    for s in strings:
        if s and isinstance(s, str):
            result.append(s)
        else:
            return "Invalid input"
    return ', '.join(result)

print(concatenate([]))