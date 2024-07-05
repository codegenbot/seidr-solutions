from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    balance = 0
    start = 0
    for i, char in enumerate(paren_string):
        if char == "(":
            if balance == 0:
                start = i
            balance += 1
        elif char == ")":
            balance -= 1
            if balance == 0:
                result.append(paren_string[start : i + 1])
    return result