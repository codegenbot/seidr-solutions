from typing import List

def filter_by_prefix() -> List[str]:
    n = int(input())
    strings = [input() for _ in range(n)]
    prefix = input()
    return [s for s in strings if s.startswith(prefix)]