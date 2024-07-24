def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append("(")
        elif char == ")":
            while stack and stack[-1] != "(":
                result.append(1)
                stack.pop()
            if stack:
                stack.pop()
    return [len(list(filter(None, stack)))]