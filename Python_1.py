from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    count = 0

    for char in paren_string:
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1

        group += char

        if count == 0:
            result.append(group)
            group = ""

    return result