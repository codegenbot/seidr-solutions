```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp = ''
    
    for c in paren_string:
        if c == ' ':
            continue
        if c == '(':
            stack.append(c)
            temp += c
        elif c == ')':
            if stack:
                stack.pop()
                temp += c
                if not stack:
                    result.append(temp)
                    temp = ''
            else:
                return []
    if stack:
        return []  # Unbalanced parentheses
    
    return [temp] + result