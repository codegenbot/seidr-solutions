from typing import List

def all_prefixes(string: str) -> list:
    return [string[: i + 1] for i in range(len(string))]