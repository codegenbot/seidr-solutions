```
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
            while stack and stack[-1] != "(":
                temp += stack.pop()
            if stack:
                temp += "("
                stack.pop()
            else:
                result.append(temp)
                temp = ""

    if temp:
        result.append(temp)

    return [temp + stack.pop() * (stack.count("(") - 1) for _ in range(stack.count("("))].split(")(")[1:-1]