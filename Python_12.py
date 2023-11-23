from typing import List


def longest(strings: List[str]) -> str:
    if not strings:
        return ""
    longest_string = max(strings, key=len)
    return longest_string


strings = ["string1", "string2", "string3"]  # Replace with the actual input strings 
result = longest(strings)
print(result)