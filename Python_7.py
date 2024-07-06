from typing import List


def filter_by_substring(strings: List[str], substring: str) -> None:
    result = [s for s in strings if substring in s]
    if result:
        return result
    else:
        print("No matching strings found.")