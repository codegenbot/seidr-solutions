def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                group += stack.pop()
            if stack:
                group += stack.pop()
            else:
                groups.append(group)
                group = ""
        else:
            group += char

    if group:
        groups.append(group)

    return [group.strip("()") for group in groups]