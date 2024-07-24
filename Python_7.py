from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if strings is None or not strings:
        return []
    if substring is None or not substring:
        return strings  # Return all strings if substring is empty

    return [s for s in strings if substring in s]