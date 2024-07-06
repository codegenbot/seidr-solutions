"""
from typing import list

def filter_by_prefix(strings: list, prefix: str) -> list:
    return [string.lower() for string in strings if string.lower().startswith(prefix.lower())]
"""