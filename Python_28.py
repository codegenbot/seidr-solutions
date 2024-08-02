from typing import List


def concatenate(strings: List[str], separator=" ") -> str:
    result = ""
    for string in strings:
        result += string + separator
    return result.rstrip(separator)