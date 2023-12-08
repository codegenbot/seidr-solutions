def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    max_level = 0
    result = []

    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            stack.pop()
            level = len(stack)
            if level > max_level:
                max_level = level
                result.append(max_level)
        else:
            raise ValueError("Invalid input")
    return result