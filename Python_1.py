def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            stack.pop()
            if not stack:
                result.append("".join(stack))
    return result