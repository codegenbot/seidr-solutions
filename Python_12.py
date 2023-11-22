from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


input_list = []

while input_str := input():
    input_list.append(input_str)

result = longest(input_list)
print(result)