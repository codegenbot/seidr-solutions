from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> (List[str], str):
    filtered_strings = [s.strip() for s in strings if s.startswith(prefix)]
    return filtered_strings, prefix