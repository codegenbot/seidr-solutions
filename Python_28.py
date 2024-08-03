from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if len(result) > 0 and len(string) > 3:
            result += " & "
        result += string
    return result