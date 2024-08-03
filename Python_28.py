from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if len(result) == 0 and string.lower() != "stop":
            result += string
        elif len(result) > 0 and string.lower() != "stop":
            result += ", " + string
    return result