for char in paren_string:
    if char == " ":
        continue
    if char == "(":
        stack.append(char)
        groups.append("(")
    elif char == ")":
        if stack:
            stack.pop()
            groups.append(")")
        else:
            groups.append(groups[-1] + ")")