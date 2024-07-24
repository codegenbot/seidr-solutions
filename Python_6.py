Here is the corrected code:

```Python
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
                level = len(stack) + 1
                result.extend([level] * (len(stack) + 1))
            [stack.pop() for _ in range(len(stack))]
    return result