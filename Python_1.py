from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            result.append(current_group)
            current_group = ""
            stack.append("(")
        elif char == ")" and stack:
            stack.pop()
        else:
            current_group += char

    if stack:
        current_group = "".join(stack) + current_group

    result.append(current_group)
    return result


print(separate_paren_groups("abc(def)ghi(jkl)mno"))