from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


string_input = input()
strings = string_input.split(",")
result = longest(strings)
print(result)