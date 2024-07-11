from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    groups = []

    for char in paren_string:
        if char == " ":
            continue
        elif char == "(":
            groups.append("(")
        elif char == ")":
            groups.append(")")
            while len(groups) > 1 and groups[-1] == "(" and groups[-2] == ")":
                groups.pop()
                groups.pop()

    result = [
        "".join(group) for group in [groups[i : j + 1] for i, j in enumerate(groups)]
    ]
    return [group for group in result if len([c for c in group if c == "("]) % 2 == 0]