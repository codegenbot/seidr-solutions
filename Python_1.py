```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    curr_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            curr_group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                curr_group += stack.pop()
            if not stack or stack.pop() != '(':
                return []
            curr_group += char
            result.append(curr_group)
            curr_group = ''
    
    return result