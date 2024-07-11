from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = ""

    for char in paren_string:
        if char == " ":
            continue
        if char in "()":
            if not stack:
                stack.append(char)
                groups += char
            else:
                if char == "(" and stack[-1] == ")":
                    result.append(groups)
                    stack.pop()
                    groups = ""
                elif char == ")" and stack[-1] == "(":
                    stack.pop()
                    groups += char
                else:
                    groups += char
        else:
            while stack and stack[-1] != "(" or groups[0] != "(":
                if stack[-1] == ")":
                    result.append(groups)
                    stack.pop()
                    groups = ""
                groups += char
            if not stack or (stack and stack[-1] == "("):
                stack.append(char)
                groups += char
    if stack:
        result.append(groups)

    return [s.strip() for s in result]