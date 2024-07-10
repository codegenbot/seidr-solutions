from typing import List


def all_prefixes(string: str) -> List[str]:
    return ["" if i == 0 else string[:i] for i in range(len(string) + 1)]