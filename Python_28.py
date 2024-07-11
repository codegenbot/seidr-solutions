from typing import List


def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        pass
    else:
        result = ""
        for s in strings:
            if not isinstance(s, str):
                pass
            else:
                result += s
        return result