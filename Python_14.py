from typing import List


def all_prefixes(string: str) -> List[str]:
    return sorted([string[:i] for i in range(0, len(string) + 1)], key=len)