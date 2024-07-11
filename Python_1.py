```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp = ''
    
    for c in paren_string:
        if c == ' ':
            continue
        if c == '(':
            stack.append(c)
            temp += c
        elif c == ')':
            stack.pop()
            temp += c
            if not stack:
                result.append(temp)
                temp = ''

    return result