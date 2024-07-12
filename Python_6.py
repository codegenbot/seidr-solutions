def parse_nested_parens(paren_string: str) -> list:
    result = []
    stack = []
    level = 0
    for char in paren_string:
        if char == "(":
            stack.append(level)
            level += 1
        elif char == ")":
            stack.pop()
            level -= 1
    while stack:
        result.append(stack.pop() + 1)
    return result