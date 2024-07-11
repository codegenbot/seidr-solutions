from typing import list

def all_prefixes(string: str) -> list:
    result = []
    for i in range(len(string)):
        prefix = string[:i + 1]
        result.append(prefix)
    return result