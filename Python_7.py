from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not substring:
        return strings  
    return [s for s in strings if substring in s]