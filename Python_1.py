from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            group += char
        elif char == ")":
            if group and group[-1] == "(":
                group += char
            else:
                result.append(group)
                group = ""
        else:
            raise ValueError("Invalid input")
    if group:
        result.append(group)
    return [x.replace("(", "( " + ")").replace("  ", " ") for x in result]