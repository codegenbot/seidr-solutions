from typing import List
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char == "(":
            group += char
        elif char == ")":
            result.append(group + char)
            group = ""
    return result