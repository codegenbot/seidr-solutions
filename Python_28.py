from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for s in strings:
        if len(s) > 5:
            result += s[:5] + "..."
        else:
            result += s
    return result