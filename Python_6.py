def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    nesting_count = 0

    for char in paren_string:
        if char == "(":
            stack.append(nesting_count)
            nesting_count += 1
        elif char == ")":
            if stack:
                stack.pop()
                nesting_count -= 1
            else:
                return []

    if stack:
        return []

    result = [0] * (max(stack) + 1)
    for level in stack:
        result[level] += 1

    return result