def parse_nested_parens(paren_string):
    result = []
    level = 0
    stack = []
    for group in paren_string.split():
        level += 1
        for char in group:
            if char == "(":
                stack.append(level)
            elif char == ")":
                if not stack:
                    raise ValueError("Unbalanced parentheses")
                level -= 1
                result.append(stack.pop())
        if level == 0:
            result.append(level)
    return result