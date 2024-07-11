```
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not isinstance(strings, list) or not isinstance(substring, str):
        return []
    return [s for s in strings if isinstance(s, str) and substring in s]