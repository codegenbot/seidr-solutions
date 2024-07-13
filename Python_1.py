def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    for char in paren_string.replace(" ", ""):
        if char == "(":
            stack.append("")
        elif char == ")":
            group = "".join(stack)
            result.append(group)
            stack.clear()
        else:
            stack[-1] += char
    return result