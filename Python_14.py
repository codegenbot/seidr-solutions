from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = [""]
    if string and len(string) > 0:
        for i in range(len(string)):
            prefix = string[:i + 1]
            prefixes.append(prefix)
    return prefixes