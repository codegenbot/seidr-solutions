from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in (str(x) for x in strings) if substring in s]