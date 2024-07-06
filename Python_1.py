def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char in ["(", "[", "{"]:
            stack.append(char)
            current_group += char
        elif char in [")", "]", "}"]:
            while stack and stack[-1] != "(":
                current_group += stack.pop()
            if not stack:
                groups.append(current_group[:-1])
                current_group = ""

    if stack:
        for _ in range(stack.pop()):
            current_group += ")"
        groups.append(current_group)

    return [group[1:-1] for group in groups]