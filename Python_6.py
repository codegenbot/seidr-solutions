def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            stack.pop()
    max_level = len(stack)
    return [max_level]