```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                stack.pop()
            if not stack:
                result.append(0)
            else:
                result.append(len(stack) + 1) 
            stack.pop()
    if stack:
        while stack:
            result.append(len(stack))
            stack.pop()
    return result