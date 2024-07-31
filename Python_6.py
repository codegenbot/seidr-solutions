```
from typing import List
stack = []
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for paren in paren_string.split():
        level = 0
        for p in paren:
            if p == '(':
                stack.append('(')
                level += 1
            elif p == ')':
                if stack and stack[-1] == '(':
                    stack.pop()
                    level -= 1
        result.append(level)
    return result