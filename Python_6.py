from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    result = []
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if len(stack) > 0:
                stack.pop()
            else:
                result.append(-1)
        else:
            result.append(-1)
    
    result.extend([len(stack)] * len(stack))
    
    return result