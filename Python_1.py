```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp_str = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            temp_str += char
        elif char == ')':
            while len(stack) > 0 and stack[-1] != '(':
                temp_str += stack.pop()
            if len(stack) > 0 and stack[-1] == '(':
                stack.pop()
            else:
                temp_str = ''
        else:
            if len(temp_str) > 0:
                temp_str += char
            else:
                result.append('(' + char + ')')
    
    while len(stack) > 0:
        for _ in range(len(stack)):
            temp_str += stack.pop()
    
    result.append(temp_str)
    return result