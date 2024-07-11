from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = [""]
    for i in range(len(string) + 1):
        prefix = string[:i]
        prefixes.append(prefix)
    return prefixes