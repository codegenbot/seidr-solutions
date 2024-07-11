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
        elif char == ')':
            while stack and stack[-1] != '(':
                groups.append(')') if not stack else None
            if stack:
                stack.pop()
        if not stack:
            result.append(''.join(groups + ['()'] if groups else ['()']))
            groups = []
    if stack:
        result.append(''.join(groups + ['()'] if groups else ['()']))
    return [group for group in result if group]