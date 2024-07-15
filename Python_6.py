from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    max_depth = 0
    current_depth = 0
    stack = []
    
    for char in paren_string:
        if char not in ['(', ')']:
            return []
        
        if char == '(':
            stack.append(char)
            current_depth = len(stack)
            max_depth = max(max_depth, current_depth)
        elif char == ')':
            if not stack:
                return []
            stack.pop()
            current_depth = len(stack)
    
    if stack:
        return []
    
    return [max_depth]

paren_string = input("Enter a string of nested parentheses: ")
print(parse_nested_parens(paren_string))