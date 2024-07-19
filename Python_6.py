```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    max_level = 0
    current_level = 0
    
    for char in paren_string:
        if char == '(':
            current_level += 1
            max_level = max(max_level, current_level)
        elif char == ')':
            current_level -= 1
        else:
            continue
        
        result.append(max_level)
    
    return result