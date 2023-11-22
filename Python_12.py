from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


input_string = input()
input_list = input_string.split()
result = longest(input_list)
print(result)