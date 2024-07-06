from typing import List


def filter_by_prefix() -> List[str]:
    strings = input("Enter a list of strings (space-separated): ")
    prefix = input("Enter a prefix: ")

    try:
        strings = [s.strip() for s in strings.split()]
        return [s for s in strings if s.startswith(prefix)]
    except ValueError:
        return []