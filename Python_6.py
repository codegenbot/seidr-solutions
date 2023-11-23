def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    stack = []

    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            depths.append(len(stack))
            stack.pop()

    return depths