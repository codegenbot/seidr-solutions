from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    stack = []

    for char in paren_string:
        if char == " ":
            continue
        elif char == "(":
            stack.append(char)
            temp += char
        elif char == ")":
            if stack and stack[-1] == "(":
                stack.pop()
                result.append(temp + char)
                temp = ""
            else:
                temp += char

    return [x for x in filter(lambda x: any(y == "(" for y in x), result)]