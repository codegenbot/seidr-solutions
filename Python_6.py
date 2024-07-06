def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    max_level = 0
    result = []

    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if len(stack) == 0:
                continue
            stack.pop()
        else:
            raise ValueError("Invalid character in parentheses string")

        level = len(stack)
        if level > max_level:
            max_level = level
        result.append(max_level)

    return result