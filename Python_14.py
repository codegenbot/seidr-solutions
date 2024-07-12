from typing import List


def all_prefixes(string: str) -> List[str]:
    result = []
    for i, char in enumerate(string):
        for j in range(i + 1):
            result.append(string[j : i + 1])
    result.sort()
    return result