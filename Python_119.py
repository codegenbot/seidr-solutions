def match_parens(lst):
    stack = []
    for s in lst:
        inside_string = False
        for c in s:
            if c == '"':
                inside_string = not inside_string
            elif c == '(' and inside_string:
                stack.append(c)
            elif c == ')' and inside_string:
                if len(stack) == 0:
                    return "No"
                stack.pop()
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"