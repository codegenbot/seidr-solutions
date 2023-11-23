from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


filtered_strings = filter_by_prefix(input().split(), input())

print(*filtered_strings)