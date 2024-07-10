from typing import List
import re


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not substring:
        return []

    pattern = re.compile(substring)

    return [s for s in strings if bool(pattern.search(s))]