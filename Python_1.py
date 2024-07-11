from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp = ""

    for char in paren_string:
        if char == "(":
            stack.append(char)
            temp += char
        elif char == ")":
            while stack and stack[-1] != "(":
                temp += stack.pop()
            if not stack:
                result.append(temp)
                temp = ""
            else:
                stack.pop()  # remove the '('

    for _ in range(len(stack)):
        temp += stack.pop()
    result.append(temp)

    return [temp] + result