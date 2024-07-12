```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            groups.append('')
        elif char == ')':
            if len(stack) > 0:
                stack.pop()
                groups[-1] += ')'
                if len(stack) == 0:
                    result.append(groups.pop())
    return result