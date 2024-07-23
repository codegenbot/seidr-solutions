```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            groups += char
        elif char == ')':
            stack.pop()
            groups += char
            if not stack:
                while groups and groups[-1] != '(':
                    result.append(groups[groups.index('('):])
                    groups = groups[:groups.index('(')]
                result.append(groups)
                groups = ''

    return result