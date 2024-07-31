```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    group = ''
    
    for char in paren_string:
        if char == '(': 
            stack.append(char)
            group += char
        elif char == ')':
            while stack and stack.pop() != '(':
                group += char
            stack.clear()
            groups.append(group + char)
            group = ''
    
    return groups