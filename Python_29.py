from typing import List


def filter_by_prefix() -> List[str]:
    # First line should be an integer n
    n = int(input())
    # Next n lines should be strings
    strings = [input() for _ in range(n)]
    # Last line should be the prefix string
    prefix = input()
    # Filter the strings that start with the given prefix
    return [s for s in strings if s.startswith(prefix)]