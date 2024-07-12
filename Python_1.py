from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            temp += char
        elif char == ")":
            while stack and stack[-1] != "(":
                temp += stack.pop()
            if not stack:
                result.append(temp + ")")
                temp = ""
            else:
                stack.pop()

    for _ in range(len(stack)):
        temp += ")"
        stack.pop()
    if temp:
        result.append(temp)

    return [x.strip() for x in temp.split(")(")]