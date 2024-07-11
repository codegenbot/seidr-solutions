```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    groups = [""]
    for c in paren_string:
        if c == " ":
            continue
        if c == "(":
            groups.append("")
        elif c == ")":
            group = groups.pop()
            while not group.endswith("()"):
                group += "()"
            result.append(group)
    return result