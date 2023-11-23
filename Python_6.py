def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    stack = []
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            levels.append(len(stack))
            stack.pop()
    
    return levels