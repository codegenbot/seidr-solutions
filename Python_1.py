from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    curr_group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            curr_group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                curr_group += stack.pop()
            if stack:
                curr_group += stack.pop() + char
            else:
                result.append(curr_group)
                curr_group = ""
    if stack:
        for _ in range(len(stack)):
            curr_group += stack.pop() + ")"
        result.append(curr_group)

    return [g[1:-1] for g in result]