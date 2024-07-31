from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    groups = []
    for char in paren_string:
        if char == "(" and not groups or groups[-1] != ")":
            groups.append(char)
        elif char == ")" and groups and groups[-1] == "(":
            groups.pop()
            result.append("".join(groups).replace("(", ""))
            groups.clear()
    return [group.replace(")", ")") for group in (groups + ["".join(groups)])]