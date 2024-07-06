def separate_paren_groups(paren_string):
    result = []
    stack = []
    for c in paren_string:
        if c == "(":
            stack.append(c)
        elif c == ")":
            while len(stack) > 0 and stack[-1] != "(":
                stack.pop()
            if len(stack) == 0 or stack[-1] != "(":
                result.append("")
            else:
                result.append(stack.pop())
    return [group for group in result if group[0] == "(" and group[-1] == ")"]