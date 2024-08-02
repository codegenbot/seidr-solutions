from typing import list

def all_prefixes(string: str) -> list[str]:
    prefixes = []
    for i in range(len(string)):
        prefix = string[:i + 1]
        prefixes.append(prefix)
    return prefixes