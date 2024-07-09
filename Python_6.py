```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    temp = []
    level = 0
    for char in paren_string:
        if char == '(':
            level += 1
            temp.append(level)
        elif char == ')':
            level -= 1
            temp.pop()
    while temp:
        result.append(temp.pop())
    return result