```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
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
                return []  # invalid parentheses
            current_group += char
        else:
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if not stack or stack.pop() != '(':
                return []  # invalid parentheses
            current_group += char
            
    while stack:
        for _ in range(stack.pop()):
            current_group += ')'
            
    groups.append(current_group)
    
    while paren_string:
        stack = []
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
                    return []  # invalid parentheses
                current_group += char
            else:
                while stack and stack[-1] != '(':
                    current_group += stack.pop()
                if not stack or stack.pop() != '(':
                    return []  # invalid parentheses
                current_group += char
            
        while stack:
            for _ in range(stack.pop()):
                current_group += ')'
                
        groups.append(current_group)
        
        paren_string = paren_string[paren_string.index(')')+1:].strip()
    
    return groups