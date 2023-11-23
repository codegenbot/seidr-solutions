from typing import List


def longest(strings: List[str]) -> str:
    if not strings:
        return ""
    longest_string = max(strings, key=len)
    return longest_string


strings = ['apple', 'banana', 'cherry']
result = longest(strings)
print(result)