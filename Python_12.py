from typing import List, Optional

def longest(strings: List[str]) -> Optional[List[str]]:
    if not strings:
        return None
    longest_length = max(len(string) for string in strings)
    longest_strings = [string for string in strings if len(string) == longest_length]
    return longest_strings