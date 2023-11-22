def match_parens(lst):
    stack = []
    open_parens = 0

    for char in lst:
        if char == "(":
            stack.append(char)
            open_parens += 1
        elif char == ")":
            if not stack or stack[-1] != "(":
                return "No"
            stack.pop()
            open_parens -= 1

    return "Yes" if not stack and open_parens == 0 else "No"