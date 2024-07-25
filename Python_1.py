def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    curr_group = ""

    for char in paren_string:
        if char == "(":
            stack.append("(")
            curr_group += "("
        elif char == ")":
            stack.pop()
            curr_group += ")"
            if not stack:
                result.append(curr_group)
                curr_group = ""

    return result