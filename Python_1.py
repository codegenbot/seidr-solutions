def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    group = ""
    for char in paren_string:
        if char == "(":
            stack.append("(")
            group += char
        elif char == ")":
            stack.pop()
            group += char
            if not stack:
                result.append(group)
                group = ""
    return result