from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    balance = 0
    for char in paren_string:
        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1
        group += char
        if balance == 0:
            result.append(group)
            group = ""
    return result