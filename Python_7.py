from typing import List

def filter_by_substring(strings: List[str], substring: str) -> list:
    return [s for s in strings if substring in s]