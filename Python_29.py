```
from typing import List


def filter_by_prefix() -> List[str]:
    strings = ""
    while not strings:
        strings = input("Enter a list of strings (space-separated): ")

    prefix = ""
    while not prefix:
        prefix = input("Enter a prefix: ")

    try:
        return [s.strip() for s in strings.split() if s.startswith(prefix)]
    except ValueError:
        return []