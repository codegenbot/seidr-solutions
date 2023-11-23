from typing import List


def longest(strings: List[str]) -> str:
    if not strings:
        return ""
    longest_string = max(strings, key=len)
    return longest_string


strings = [input().strip() for _ in range(int(input()))]
result = longest(strings)
print(result)