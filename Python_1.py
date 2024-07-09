def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    inside_parentheses = False
    for char in paren_string:
        if char == "(":
            inside_parentheses = True
        if inside_parentheses:
            temp += char
        if char == ")":
            inside_parentheses = False
            result.append(temp)
            temp = ""
    return result