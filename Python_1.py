```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    temp = ''

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            temp += char
        elif char == ')':
            if stack and stack[-1] == '(':
                stack.pop()
                temp += char
                groups.append(temp)
                temp = ''
            else:
                temp += char

    return groups