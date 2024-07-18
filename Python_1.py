def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    balance = 0
    for char in paren_string:
        group += char
        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1
        if balance == 0:
            result.append(group)
            group = ""
    return result