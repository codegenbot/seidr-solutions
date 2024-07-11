from typing import List


def concatenate(strings: List[str]) -> str:
    output = ""
    for string in strings:
        if string:
            output += string + " "
    return output.strip()