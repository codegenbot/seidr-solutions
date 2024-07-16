```
from typing import List
stack = []
result = []

def parse_nested_parens(paren_string: str) -> List[int]:
    for char in paren_string:
        if char == '(':
            stack.append(char)
            result.append(len(stack))
        elif char == ')':
            stack.pop()
            result.append(len(stack))

    return result