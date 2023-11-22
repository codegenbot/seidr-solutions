from typing import List

def parse_nested_parens(paren_string: str) -> int:
    stack = []
    max_nesting = 0
    total_nested_pairs = 0

    for char in paren_string:
        if char == '(':
            stack.append(char)
            max_nesting = max(max_nesting, len(stack))
        elif char == ')':
            if stack:
                stack.pop()
                total_nested_pairs += 1
            else:  
                return 0
    
    if stack: 
        return 0

    return max_nesting * total_nested_pairs