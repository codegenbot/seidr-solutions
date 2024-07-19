def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp = ""

    for char in paren_string:
        if char == "(":
            stack.append("(")
            temp += "("
        elif char == ")":
            stack.pop()
            temp += ")"
            if not stack:
                result.append(temp)
                temp = ""

    return result