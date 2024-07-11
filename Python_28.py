from typing import List


def concatenate(strings: List[str]) -> str:
    if strings is None or len(strings) == 0:
        return "Error: Expected a list of strings"
    elif isinstance(strings, list):
        return "".join(map(str, strings))
    else:
        return str(strings)