def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp = ""

    for char in paren_string:
        if char == "(":
            if stack:  # not the first opening parenthesis
                temp += char
            stack.append('(')
        elif char == ")":
            stack.pop()
            temp += char
            if not stack:  # all opening parentheses have been closed
                result.append(temp)
                temp = ""

    return result