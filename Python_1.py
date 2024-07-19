from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
        elif char == ")":
            temp = ""
            while stack and stack[-1] != "(":
                temp += stack.pop()
            if stack:
                stack.pop()  # pop the '('
            result.append("(" + temp + ")" + "".join(stack))
    return [group for group in result if group]