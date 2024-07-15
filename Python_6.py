import sys
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    current_depth = 0
    stack = []
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
            current_depth = len(stack)
        elif char == ')':
            if not stack:
                return []
            stack.pop()
            current_depth = len(stack)
    
    if stack:
        return []
    
    return [current_depth]

paren_string = input()
print(parse_nested_parens(paren_string))