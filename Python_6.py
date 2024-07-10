def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(1)
        elif char == ")":
            if stack:
                stack.pop()
            else:
                stack.append(-1)
    return [
        len(list(group)) for group in (x for x in itertools.groupby(stack) if x[1])
    ][::-1]