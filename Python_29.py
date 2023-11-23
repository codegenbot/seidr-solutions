from typing import List


def filter_by_prefix(n: int, strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]