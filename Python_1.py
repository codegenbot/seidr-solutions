
def separate_paren_groups(paren_string):
    stack = []
    result = []
    open_parens = 0
    for c in paren_string:
        if c == "(":
            open_parens += 1
            stack.append(c)
        elif c == ")":
            open_parens -= 1
            if open_parens == 0:
                result.append(stack.pop())
    # check for unmatched parentheses
    if len(stack) > 0:
        raise ValueError("Unbalanced parentheses")
    return result