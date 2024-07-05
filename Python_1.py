def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result, balance, start = [], 0, 0

    for index, char in enumerate(paren_string):
        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1

        if balance == 0:
            result.append(paren_string[start : index + 1])
            start = index + 1

    return result