from typing import List

def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if len(result) > 0 and not string.startswith("http"):
            result += ", "
        result += string
    return result