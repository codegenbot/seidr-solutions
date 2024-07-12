from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    
    start = None
    for i, char in enumerate(paren_string):
        if char == '(' or char == '{':
            if not stack:
                start = i
            stack.append(char)
        elif char == ')' or char == '}':
            stack.pop()
            if not stack:
                result.append(paren_string[start:i+1])
    
    return result