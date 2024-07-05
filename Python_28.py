from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join([s.strip() for s in strings])