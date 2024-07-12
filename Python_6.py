def parse_nested_parens(paren_string: str) -> list:
    result = []
    stack = []
    inside_parens = False
    for char in paren_string:
        if char == "(":
            stack.append(char)
            inside_parens = True
        elif char == ")":
            if stack and stack[-1] == "(":
                stack.pop()
                inside_parens = not inside_parens
            else:
                inside_parens = False

    while stack:
        level = len(stack)
        result.append(level)
        for _ in range(level):
            stack.pop()

    return result