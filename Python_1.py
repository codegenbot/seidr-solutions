def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append([])
        elif char == ")":
            if len(stack) > 0:
                stack[-1].append(char)
            else:
                groups.append("".join(stack))
                stack = []
        else:
            if len(stack) > 0:
                stack[-1].append(char)
    if len(stack) > 0:
        groups.append("".join(stack))
    return groups