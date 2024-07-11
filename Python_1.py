def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []

    for char in paren_string.replace(" ", ""):
        if char == "(":
            stack.append("")
        elif char == ")":
            result.append("".join(stack))
            stack.clear()
        else:
            stack[-1] += char

    return result