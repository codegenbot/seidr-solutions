def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if len(stack) > 0 and stack[-1] == "(":
                stack.pop()
            else:
                groups.append("".join(stack))
                stack = []
    if len(stack) > 0:
        groups.append("".join(stack))
    return groups