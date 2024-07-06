from typing import List
import re


def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = re.sub(r"\s", "", paren_string)
    groups = []
    current_group = ""

    for char in paren_string:
        if char == "(" or char == ")":
            if not current_group:
                groups.append(current_group)
            current_group += char
        elif current_group and current_group[-1] != "(":
            if not groups:
                groups.append("")
            groups[-1] += " "
            current_group = ""
    return [group.lstrip() for group in groups]