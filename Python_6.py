from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    count = 0
    result = []
    
    for char in paren_string:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        result.append(count)
    
    return result