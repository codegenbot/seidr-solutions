def separate_paren_groups(paren_string):
    stack = []
    result = ""
    for c in paren_string:
        if c == "(":
            stack.append(c)
        elif c == ")":
            if len(stack) > 0 and stack[-1] == "(":
                stack.pop()
            else:
                result += c

    # Check for unmatched parentheses
    if len(stack) != 0:
        return None

    return result