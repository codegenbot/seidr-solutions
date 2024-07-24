def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if stack:
                stack.pop()
            else:
                result.append(0)
        elif not stack:
            result.append(0)
    return [len(lst) for lst in (list(x) for x in [stack] * 2)]