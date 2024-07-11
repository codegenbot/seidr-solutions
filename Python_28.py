from typing import List

def concatenate(strings: List[str]) -> str:
    return ' '.join(filter(None, strings))