from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if not string.startswith("http://") and not string.startswith("https://"):
            result += "http://" + string + "\n"
        else:
            result += string + "\n"
    return result.strip()