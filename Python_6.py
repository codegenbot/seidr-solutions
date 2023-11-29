from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    result = []
    count = 0
    
    for char in paren_string:
        if char == '(':
            stack.append('(')
            count += 1
        elif char == ')':
            count -= 1
            if stack and count >= 0:
                result.append(count)
                stack.pop()
            else:
                count = 0
    
    return result