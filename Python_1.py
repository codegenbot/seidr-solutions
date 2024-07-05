def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    balance = 0
    current_group = []

    for char in paren_string:
        current_group.append(char)
        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1

        if balance == 0 and current_group:
            result.append("".join(current_group))
            current_group = []

    return result