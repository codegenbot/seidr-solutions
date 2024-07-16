from typing import List


def all_prefixes(string: str) -> List[str]:
    result = []
    for i in range(1, len(string) + 1):
        result.append(string[:i])
    return result