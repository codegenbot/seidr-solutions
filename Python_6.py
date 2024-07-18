def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    stack = []

    for char in paren_string:
        if char == "(":
            current_depth += 1
            depths.append(current_depth)
            stack.append(current_depth)
        elif char == ")" and stack:
            if stack[-1] == current_depth:
                stack.pop()
                current_depth -= 1
            else:
                return [-1]
        else:
            return [-1]

    if stack:
        return [-1]
    return depths