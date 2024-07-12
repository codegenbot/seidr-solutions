def parse_nested_parens(paren_string: str) -> list:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if stack:
                stack.pop()
            else:
                result.append(len(stack))
        elif stack:
            while stack and stack[-1] != "(":
                stack.pop()
    return result