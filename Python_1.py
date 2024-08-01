```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            current_group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if not stack or stack.pop() != '(':
                return []
            current_group += char
        else:
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if not stack or stack.pop() != '(':
                return []
            current_group += char
            
    result.append(current_group)
    
    while stack:
        for _ in range(stack.pop()):
            current_group = ''
            while True:
                if stack and stack[-1] == '(':
                    for _ in range(stack.pop()):
                        current_group += ')'
                else:
                    break
            result.append('(' + current_group + ')')
            
    return result