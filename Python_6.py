from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    max_count = 0
    current_count = 0
    stack = []
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
            current_count = max(current_count, len(stack))
        elif char == ')':
            if stack:
                stack.pop()
            else:
                current_count = 0
    
    return [current_count]