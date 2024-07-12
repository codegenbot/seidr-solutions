def parse_nested_parens(paren_string: str) -> list:
    result = []
    stack = [0]
    level = 0
    for char in paren_string + ")": 
        if char == "(":
            stack.append(level + 1)
            level += 1
        elif char == ")":
            level -= 1
            if not level: 
                result.append(stack.pop())
    return result