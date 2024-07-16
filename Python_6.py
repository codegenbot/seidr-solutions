def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    max_depth = 0
    
    for char in paren_string:
        if char == '(':
            stack.append('(')
            max_depth = max(max_depth, len(stack))
        elif char == ')':
            stack.pop()
    
    return [max_depth//2 for _ in paren_string]