def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp = ""
    for char in paren_string:
        if char == "(":
            stack.append(char)
            temp += char
        elif char == ")":
            stack.pop()
            temp += char
            if len(stack) == 0:
                result.append(temp)
                temp = ""
    return result