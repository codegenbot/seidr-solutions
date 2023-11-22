from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if paren_string.count('(') != paren_string.count(')'):
        return "Invalid input string"
    
    stack = []
    result = []
    group = ""

    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            stack.pop()
        
        group += char
        
        if not stack:
            result.append(group.strip())
            group = ""
    
    return result