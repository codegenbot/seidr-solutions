```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(1)
        elif char == ')':
            while stack and stack[-1] != 1:
                stack.pop()
            if not stack:
                result.append(0)
            else:
                level = len(stack)
                result.extend([level] * (len(stack)))
            [stack.pop() for _ in range(len(stack))]
    return result