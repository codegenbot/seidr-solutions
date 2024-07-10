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
            if stack:
                stack.pop()
                groups += char
                if not stack:
                    result.append(groups)
                    groups = ''
            else:
                return []
    if stack:  # Check for unclosed parentheses
        return []
    return result