def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            groups.append("(")
        elif char == ")":
            stack.pop()
            groups.append(")")
        if not stack and len(groups) > 1:
            result.append("".join(groups))
            groups = []

    if stack or len(groups) > 0:
        result.append("".join(groups))

    return [group for group in result if "(" in group and ")" in group]