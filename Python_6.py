def parse_nested_parens(paren_string):
    stack = []
    result = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            stack.pop()
            level = len(stack) - 1
            result.append(level)
    return result