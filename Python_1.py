def separate_paren_groups(paren_string: str) -> List[str]:
    res = []
    stack = []
    temp = ""
    for char in paren_string:
        if char == "(":
            stack.append(char)
            temp += char
        elif char == ")":
            stack.pop()
            temp += char
            if not stack:
                res.append(temp)
                temp = ""
    return res