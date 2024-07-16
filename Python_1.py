from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    groups = ""
    for char in paren_string:
        if char == "(" or char == ")":
            if groups and (
                groups[-1] == "(" and char == ")" or groups[-1] == ")" and char == "("
            ):
                result.append(groups)
                groups = ""
            else:
                groups += char
    if groups:
        result.append(groups)
    return [group.strip("()") for group in result]