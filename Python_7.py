```
from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not strings or not substring:
        return []
    
    return [s for s in strings if substring in s]