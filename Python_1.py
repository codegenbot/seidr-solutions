from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char == " " or not char.isalnum():
            continue
        if char == "(":
            group += "("
        elif char == ")":
            if group.endswith(")("):
                group += ")"
            else:
                group += ")"
                result.append(group)
                group = "("
    if group:
        group = group[:-1] + ")"
        result.append(group)
    return [group[1:-1]] if len(result) == 0 else result