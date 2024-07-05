def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result, balance, current = [], 0, ""
    for char in paren_string:
        current += char
        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1
        if balance == 0:
            result.append(current)
            current = ""
    return result