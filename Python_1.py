from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char in "()":
            group += char
        else:
            result.append(group)
            group = ""
    result.append(group)
    return result