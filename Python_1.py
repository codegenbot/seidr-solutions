def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            group += char
        elif char == ")":
            if stack and stack[-1] == "(":
                while stack and stack[-1] == "(":
                    stack.pop()
                stack.append(")")
                group += char
                groups.append(group[:-1])
                group = ""
            else:
                stack.append(char)
                group += char

    return groups