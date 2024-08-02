from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), strings.index(x)))


strings = input("Enter a space-separated string of words: ").split()
result = longest(strings)
print(result)