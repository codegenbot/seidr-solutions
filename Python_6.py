```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    temp = 0
    for char in paren_string:
        if char == '(':
            temp += 1
        elif char == ')':
            temp -= 1
        else:
            continue
        if temp > 0:
            result.append(temp)
    return result