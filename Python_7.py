from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not isinstance(substring, str):
        raise ValueError("substring must be a string")
    return [s for s in strings if isinstance(s, str) and substring in s]