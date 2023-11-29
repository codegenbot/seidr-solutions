from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not isinstance(strings, list) or not all(isinstance(s, str) for s in strings):
        return "Invalid input: Expecting a list of strings"

    if not strings:
        return None

    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string

    return longest_string