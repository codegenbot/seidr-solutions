from typing import List


def all_prefixes(string: str) -> List[str]:
    result = ['']
    for char in string:
        result.append(result[-1] + char)
    return result