from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if string.endswith("..."):
            result += "..." + "\n"
        else:
            result += string + "\n"
    return result.strip()