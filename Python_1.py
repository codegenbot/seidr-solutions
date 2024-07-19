def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    current_group = ""
    for char in paren_string:
        if char == "(":
            stack.append("(")
            current_group += "("
        elif char == ")":
            stack.pop()
            current_group += ")"
            if not stack:
                result.append(current_group)
                current_group = ""
    return result