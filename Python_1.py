```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            temp += char
        elif char == ')':
            if not stack:
                raise ValueError('Unbalanced parentheses')
            stack.pop()
            temp += char
            result.append(temp)
            temp = ''

    return result