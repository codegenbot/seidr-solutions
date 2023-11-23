from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


n = int(input())
strings = [input() for _ in range(n)]
prefix = input()
result = filter_by_prefix(strings, prefix)
print(result)