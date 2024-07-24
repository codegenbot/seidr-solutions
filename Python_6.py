def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append("(")
            result.append(-1)
        elif char == ")":
            stack.pop()
            if not stack:
                result.append(len(result))
    return result