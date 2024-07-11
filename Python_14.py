from typing import List

def all_prefixes(string: str) -> List[str]:
    prefixes = [""]
    for char in string:
        prefixes.extend([p + char for p in prefixes])
    return prefixes