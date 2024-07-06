from typing import list

def filter_by_substring(strings: list, substring: str) -> list:
    if not isinstance(substring, str):
        return []
    return [s for s in strings if substring in s]