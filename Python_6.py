def parse_nested_parens(paren_string: str) -> list:
    result = []
    stack = []
    level = 0
    for char in paren_string:
        if char == "(":
            level += 1
            stack.append(level)
        elif char == ")":
            level -= 1
            if not stack or level < stack[-1]:
                break
            stack.pop()
    return [level + 1]