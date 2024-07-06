from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char not in ["(", ")"]:
            raise ValueError("Invalid character")

        if char == "(":
            stack.append(len(str.join("", result)) + 1)
            group += char
        elif char == ")":
            stack.pop()
            group += char
            while stack:
                result.append(group + ")" if not stack else group)

    return [group for group in result if group]