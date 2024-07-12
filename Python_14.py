from typing import List


def all_prefixes(string: str) -> List[str]:
    result = [string[:i] for i in range(1, len(string) + 1)]
    return result