```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack:
                while stack and stack[-1] != '(':
                    stack.pop()
                if stack:
                    result.append(len(stack))
                else:
                    result.append(0)
            else:
                result.append(-1) 
    return result