from typing import List


def longest(strings: List[str]) -> str:
    if not strings:
        return ""
    longest_string = max(strings, key=len)
    return longest_string


input_string = input().strip()
strings = input_string.split(",")
result = longest(strings)
print(result)