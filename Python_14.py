from typing import List


def all_prefixes(string: str) -> List[str]:
    result = [string]
    for i in range(1, len(string)):
        result.append(string[:i+1])
    return result