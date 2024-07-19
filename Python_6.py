def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append("(")
            depths.append(len(stack))
        elif char == ")":
            stack.pop()

    return depths