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
            if stack:
                stack.pop()
                if not stack:
                    groups.append(''.join(stack + [char]))
                    stack.clear()
            else:
                groups.append(char)
    
    result.extend(groups)
    return result