def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    max_count = 0
    current_count = 0
    
    for char in paren_string:
        if char == '(':
            current_count += 1
            max_count = max(max_count, current_count)
        elif char == ')':
            current_count -= 1
        
        if char == ' ':
            result.append(max_count)
            max_count = 0
    
    result.append(max_count)
    
    return result