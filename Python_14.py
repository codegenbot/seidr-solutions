from typing import list

def all_prefixes(string: str) -> list:
    prefixes = []
    for i in range(len(string)):
        prefixes.append(string[:i+1])
    return prefixes