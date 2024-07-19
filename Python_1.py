```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ''
    
    for paren in paren_string:
        if paren == ' ':
            continue
        if paren in '()' and not stack:
            stack.append(paren)
            group += paren
        elif paren in '()' and stack:
            if stack[-1] == '(' and paren == ')':
                groups.append(group + paren)
                stack = []
                group = ''
            else:
                stack.pop()
                group += paren
        else:
            group += paren
    
    return groups