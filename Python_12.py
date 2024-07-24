from typing import List, Optional


def read_input() -> List[str]:
    return input().split()


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))


strings = read_input()
result = longest(strings)
print(result)