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
            if not stack or (char == ')' and stack[-1] != '(') or (char == '}' and stack[-1] != '{'):
                start = None
                stack = []
            else:
                stack.pop()
                if not stack:
                    result.append(paren_string[start:i+1])
    
    if stack:
        start = None
    
    return result