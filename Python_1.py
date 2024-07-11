from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char.isspace():
            if group:
                result.append(group)
                group = ""
        else:
            group += char
    if group:
        result.append(group)
    return [
        group
        for group in set(
            tuple(group) for group in set(frozenset(group.split()) for group in result)
        )
    ]