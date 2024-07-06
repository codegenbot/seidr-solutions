def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append([])
        elif char == ")":
            group = stack.pop()
            if len(stack) > 0:
                stack[-1].extend(group)
            else:
                groups.append(group)
        else:
            if len(stack) > 0:
                stack[-1].append(char)
    return groups