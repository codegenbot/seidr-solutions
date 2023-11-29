def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    result = []
    count = 0

    for char in paren_string:
        if char == "(":
            stack.append("(")
            count += 1
        elif char == ")":
            count -= 1
            result.append(count)
            stack.pop()

    return result