def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    stack = [0] * len(paren_string)
    for i, char in enumerate(paren_string):
        if char == "(":
            stack.append(i)
        elif char == ")":
            if not stack:
                return []
            result.append(stack.pop())
    return result