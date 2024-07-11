from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]