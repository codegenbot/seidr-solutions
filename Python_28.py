from typing import List

def concatenate(strings: List[str]) -> str:
    total_string = ""
    for string in strings:
        total_string += string
    return total_string