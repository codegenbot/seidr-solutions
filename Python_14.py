def all_prefixes(string: str) -> list:
    from typing import List
    return list(string[i:] for i in range(len(string)))