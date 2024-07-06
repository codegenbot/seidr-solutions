from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for s in strings:
        if isinstance(s, str):
            result += s.strip() + " "
        else:
            return "Error: Invalid input. Please provide a list of strings."
    return result.strip()