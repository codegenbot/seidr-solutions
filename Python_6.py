from typing import List

def parse_nested_parens(paren_string: str) -> int:
    stack = []
    max_nesting = 0
    total_pairs = 0

    for char in paren_string:
        if char == '(':
            stack.append(char)
            max_nesting = max(max_nesting, len(stack))
        elif char == ')':
            if stack:
                stack.pop()
            else:  
                return 0
    
    if stack: 
        return 0

    total_pairs = len(paren_string) // 2
    return max_nesting * total_pairs