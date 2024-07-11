```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not paren_string:
        return []

    result = []
    stack = []
    groups = []

    for char in paren_string:
        if char == ' ':
            continue
        if stack and (char == '(' or char == ')'):
            if char == '(':
                stack.append(char)
                groups.append('(')
            elif char == ')':
                stack.pop()
                groups.append(')')
            
            if not stack:  
                result.append(''.join(groups))
                groups = []
        
        if not stack and (char == '(' or char == ')'):
            if char == '(':
                stack.append(char)
                groups.append('(')
            elif char == ')':
                stack.pop()
                groups.append(')')
            result.append(''.join(groups))
            groups = []

    return [group for group in set(tuple(group) for group in set(frozenset(group.split()) for group in result))]