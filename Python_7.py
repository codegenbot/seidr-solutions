from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if len(substring) <= 0:
        return strings
    return [s for s in strings if substring in s]