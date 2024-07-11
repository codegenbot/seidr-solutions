from typing import List


def all_prefixes(string: str) -> List[str]:
    result = []
    for i in range(len(string) + 1):
        prefix = string[:i]
        result.append(prefix)
    return result