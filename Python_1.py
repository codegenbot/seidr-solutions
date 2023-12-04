def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    current_group = ""
    balance = 0
    for char in paren_string:
        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1
        if balance == 0 and current_group != "":
            groups.append(current_group)
            current_group = ""
        else:
            current_group += char
    return groups