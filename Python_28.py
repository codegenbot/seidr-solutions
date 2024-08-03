from typing import List


def concatenate_strings(strings: List[str]) -> str:
    result = ""
    for string in strings:
        result += string + " "
    return result.strip()