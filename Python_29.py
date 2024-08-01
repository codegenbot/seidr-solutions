from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if not isinstance(prefix, str):
        raise ValueError("Prefix must be a string")
    return [s for s in strings if s.startswith(prefix)]