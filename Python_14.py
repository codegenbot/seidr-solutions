from typing import List


def all_prefixes(string: str) -> List[str]:
    result = []
    for i in range(len(string)):
        result.extend([string[:j] for j in range(i+1, len(string)+1)])
    return result