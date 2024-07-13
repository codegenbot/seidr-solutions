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
result = ["".join(group) for group in groups]
return [group for group in result if "(" in group and ")" in group]