from typing import list


def filter_by_substring(strings: list, substring: str) -> list:
    if not substring:
        return strings  # Return all strings when substring is empty
    return [s for s in strings if substring in s]