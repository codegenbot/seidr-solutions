```
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not isinstance(strings, list):
        raise ValueError("Input 'strings' must be a list")
    if not isinstance(substring, str):
        raise ValueError("Input 'substring' must be a string")

    return [s for s in strings if substring in s]