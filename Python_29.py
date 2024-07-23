from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if len(prefix) > 30:
        raise ValueError("Input string length should be less than or equal to 30")
    return [s for s in strings if s.startswith(prefix)]