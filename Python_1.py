from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    
    start = None
    for i, char in enumerate(paren_string):
        if char == '(' or char == '{':
            if not stack:
                if start is not None:
                    start = i
            stack.append(char)
        elif char == ')' or char == '}':
            if len(stack) == 0:
                start = i
                continue
            stack.pop()
            if not stack:
                result.append(paren_string[start:i+1])
    
    if stack:
        result.append(paren_string[start:])
    
    return result