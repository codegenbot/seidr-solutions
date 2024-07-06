def separate_paren_groups(paren_string):
    stack = []
    result = []
    for c in paren_string:
        if c == "(":
            stack.append(c)
        elif c == ")":
            if len(stack) > 0 and stack[-1] == "(":
                stack.pop()
            else:
                result.append(c)
    # Check for unmatched parentheses
    if len(stack) != 0:
        return None
    # Return the result list with all complete parenthesis groups
    return [group for group in result if group[0] == "(" and group[-1] == ")"]
