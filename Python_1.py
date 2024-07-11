def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    curr_group = ""

    for char in paren_string.replace(" ", ""):
        if char == "(":
            stack.append("(")
            if len(stack) == 1:
                curr_group += char
        elif char == ")":
            stack.pop()
            if not stack:
                curr_group += char
                result.append(curr_group)
                curr_group = ""
        else:
            curr_group += char

    return result