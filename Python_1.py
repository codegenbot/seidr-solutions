def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for ch in paren_string:
        if ch == "(":
            temp += ch
        elif ch == ")":
            temp += ch
            result.append(temp)
            temp = ""
    return result