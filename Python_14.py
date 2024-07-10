from typing import List
def all_prefixes(s: str) -> List[str]:
    return [s[:i] for i in range(1, len(s) + 1)]