from typing import List, str
def filter_by_substring(strings: List[str], substring: str) -> list[str]:
    return [s for s in strings if substring in s]