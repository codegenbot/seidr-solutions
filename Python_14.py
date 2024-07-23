from typing import List


def all_prefixes(string: str) -> List[str]:
    return [string[:i] for i in range(0, len(string))]