from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    open_count = 0

    for char in paren_string:
        if char == "(":
            if open_count > 0:
                result.append(group)
                group = ""
            open_count += 1
        group += char
        if char == ")":
            open_count -= 1
            if open_count == 0:
                result.append(group)
                group = ""

    return result