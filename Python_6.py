```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(len(result))
        elif char == ')':
            result.append(max(stack.pop(), len(result)))
    return result