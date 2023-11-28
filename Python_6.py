def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    max_level = 0
    curr_level = 0
    
    for char in paren_string:
        if char == '(':
            curr_level += 1
            max_level = max(max_level, curr_level)
        elif char == ')':
            curr_level -= 1
        
        if char == ' ':
            levels.append(max_level)
            max_level = 0
            curr_level = 0
    
    levels.append(max_level)
    
    return levels