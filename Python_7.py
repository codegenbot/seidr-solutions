```
from typing import list

def filter_by_substring(strings: list, substring: str) -> list:
    if not substring:
        return strings  
    return [s for s in strings if substring in s]