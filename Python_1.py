def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    for c in paren_string:
        if c == "(":
            stack.append([])
        elif c == ")":
            if len(stack) > 0:
                stack[-1].append(c)
            else:
                result.append("".join(stack))
                stack = []
        else:
            stack[-1].append(c)
    return result