from typing import List

def concatenate(strings: List[str]) -> str:
    concatenated = ''
    for string in strings:
        concatenated += string
    return concatenated