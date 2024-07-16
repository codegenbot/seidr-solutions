from typing import List
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    paren_string = paren_string.strip()
    for char in paren_string:
        if char == "(":
            group += char
        elif char == ")":
            group += char
            result.append(group)
            group = ""
    return result