from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if not string.isalpha():
            raise ValueError("All strings must contain letters only.")
        result += string
    return result.lower()