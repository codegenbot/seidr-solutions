from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(sorted(map(str.lower, strings)))