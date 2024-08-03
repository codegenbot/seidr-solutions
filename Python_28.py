from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if len(string) > 5:
            result += "A long string: " + string
        else:
            result += string + " "
    return result.strip()