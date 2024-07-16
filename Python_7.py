from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    from typing import List

    return [s for s in strings if substring in s]