from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    balance = 0
    group = ""
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