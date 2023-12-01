from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


strings = [input("Enter a string: ") for _ in range(len(strings))]

result = longest(strings)
print("Longest string:", result)