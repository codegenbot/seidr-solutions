from typing import List


def all_prefixes(string: str) -> List[str]:
    return [
        string[i:j]
        for i in range(len(string) + 1)
        for j in range(i + 1, len(string) + 2)
    ]