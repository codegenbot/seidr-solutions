from typing import list

def all_prefixes(string: str) -> list:
    return list(string[i:] for i in range(len(string)))