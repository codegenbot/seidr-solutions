def separate_paren_groups(paren_string: str) -> list[str]:
    stack = []
    temp = ""
    for char in paren_string:
        if char == "(":
            stack.append(temp)
            temp = ""
        elif char == ")":
            if temp != "":
                result.append(temp + ")")
            temp = ""
        else:
            temp += char
    if temp != "":
        result.append(stack.pop() + temp if stack else temp + ")")