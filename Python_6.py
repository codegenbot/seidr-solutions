def parse_nested_parens(paren_string: str) -> list:
    result = []
    stack = []
    level = 0
    for char in paren_string:
        if char == "(":
            stack.append(level + 1)
        elif char == ")":
            if stack:
                stack.pop()
                level -= 1
                if not stack:
                    result.append(level + 1)
            else:
                break
    return result