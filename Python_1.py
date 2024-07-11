def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    in_parentheses = False

    for char in paren_string:
        if char == "(":
            in_parentheses = True
        elif char == ")":
            in_parentheses = False
            result.append(temp + ")")
            temp = ""
        elif in_parentheses:
            temp += char

    return result