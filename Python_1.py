```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ''
    stack = []
    
    for char in paren_string:
        if char == ' ':
            continue
        elif char == '(':
            stack.append(char)
            temp += char
        elif char == ')':
            if stack and stack[-1] == '(':
                while stack and stack[-1] != '(':
                    temp += stack.pop()
                stack.pop()
                result.append(temp + ')')
                temp = ''
            else:
                temp += char
    
    return result