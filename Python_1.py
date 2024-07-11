```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = ""
    
    for c in paren_string:
        if c == ' ':
            continue
        if c == '(':
            stack.append(c)
            groups += c
        elif c == ')':
            if stack and stack[-1] == '(':
                stack.pop()
                groups += c
                if not stack:
                    result.append(groups + ' ')
                    groups = ""
            else:
                return []
    
    if stack:
        return []
    result.append(groups)
    return [x.strip() for x in result.split(' ') if x.strip()]