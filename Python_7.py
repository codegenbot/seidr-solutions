from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    if not isinstance(strings, list) or not isinstance(substring, str):
        raise ValueError("Invalid input! Expected a list of strings and a string.")

    return [string for string in strings if substring in string]