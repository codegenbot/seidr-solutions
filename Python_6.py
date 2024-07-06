``` 
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    ``
    stack = []
    result = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack:
                stack.pop()
                result.append(len(stack))
    return result```