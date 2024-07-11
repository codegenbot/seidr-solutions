```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ''
    
    for c in paren_string:
        if c == ' ':
            continue
        elif c == '(':
            stack.append(c)
            current_group += c
        elif c == ')':
            if stack and stack[-1] == '(':
                stack.pop()
                result.append(current_group + c)
                current_group = ''
            else:
                current_group += c
    
    return result