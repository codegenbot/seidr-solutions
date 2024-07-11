from typing import List


def all_prefixes(string: str) -> List[str]:
    result = []
    for i in range(len(string) + 1):
        prefix = string[:i]
        if len(prefix) > 0:
            result.append(prefix)
    for i in range(len(string), -1, -1):
        suffix = string[i:]
        if len(suffix) > 0:
            result.append(suffix)
    return result