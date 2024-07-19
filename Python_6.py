Here is the Python code for the problem:

```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    max_level = 0
    current_level = 0
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
            current_level += 1
        elif char == ')':
            stack.pop()
            current_level -= 1
        
        if not stack and current_level > max_level:
            max_level = current_level
        elif not stack and current_level < max_level:
            max_level = current_level
        
    result.append(max_level)
    
    for group in paren_string.split():
        stack = []
        current_level = 0
        max_level = 0
        
        for char in group:
            if char == '(':
                stack.append(char)
                current_level += 1
            elif char == ')':
                stack.pop()
                current_level -= 1
            
            if not stack and current_level > max_level:
                max_level = current_level
            elif not stack and current_level < max_level:
                max_level = current_level
        
        result.append(max_level)
    
    return result