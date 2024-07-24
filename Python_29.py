from typing import List


def filter_by_prefix() -> List[str]:
    strings = input("Enter a list of strings (comma-separated): ").split(",")
    prefix = input("Enter the prefix: ")
    return [
        s.strip().lower()
        for s in strings
        if s.strip().lower().startswith(prefix.lower())
    ]