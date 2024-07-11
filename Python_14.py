from typing import list

def all_prefixes(string: str) -> list:
    prefixes = [""]
    for i in range(len(string)):
        prefix = string[:i+1]
        if len(prefix) > 0:
            prefixes.append(prefix)
    return prefixes