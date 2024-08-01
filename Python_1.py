from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    balance = 0

    for char in paren_string:
        current_group += char

        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1

        if balance == 0:
            result.append(current_group)
            current_group = ""

    return result