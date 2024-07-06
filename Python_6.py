```
from typing import List
stack = []
result = []

def parse_nested_parens(paren_string: str) -> List[int]:
    for char in paren_string.split():
        stack.append(char)
        if char == ')':
            level = 0
            while stack[-1] != '(':
                level += 1
                stack.pop()
            stack.pop()
            result.append(level)
    return result