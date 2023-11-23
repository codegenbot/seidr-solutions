from typing import List


def filter_by_prefix() -> List[str]:
    n = int(input())  # First line should be an integer n
    strings = [input() for _ in range(n)]
    prefix = input()  # Input should be a string
    return [s for s in strings if s.startswith(prefix)]