from typing import list

def all_prefixes(string: str) -> list:
    result = []
    for i in range(1, len(string) + 1):
        result.append(string[:i])
    return result