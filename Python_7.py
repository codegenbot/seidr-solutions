```
from typing import List

def filter_by_substring(strings: List[object], substring: str) -> List[str]:
    return [str(s) for s in strings if isinstance(str(s), str) and substring in str(s)]