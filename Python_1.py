def separate_paren_groups(input_string):
    stack = []
    result = []
    for c in input_string:
        if c == "(":
            stack.append(c)
        elif c == ")":
            if len(stack) > 0 and stack[-1] == "(":
                stack.pop()
            else:
                result.append(c)
    return [group for group in result if group[0] == "(" and group[-1] == ")"]