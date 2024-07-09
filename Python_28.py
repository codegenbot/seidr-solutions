from typing import List

def concatenate(strings: List[str]) -> str:
    output = ''
    for string in strings:
        output += string
    return output