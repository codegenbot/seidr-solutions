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
            groups.append('(')
        elif char == ')':
            if stack and stack[-1] == '(':
                while stack and stack[-1] == '(':
                    stack.pop()
                    groups.append(')')
            else:
                stack.pop()
                groups.append(')')

        if not stack:
            result.append(''.join(groups))
            groups = []
    
    if stack:  
        while stack:
            groups.append(')')
            stack.pop()
        result.append(''.join(groups))

    if len(result) == 0 and stack:
        return ["Invalid input. There are unmatched parentheses."]
    elif not stack and len(result) == 0:
        return ["No groups found"]

    return [group for group in set(tuple(group) for group in set(frozenset(group.split()) for group in result))]