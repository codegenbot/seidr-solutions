from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            if stack and stack[-1] == ")":
                temp += char
            else:
                stack.append(char)
                temp += char
        elif char == ")":
            if not stack or stack[-1] != "(":
                result.append(temp)
                temp = ""
                while stack:
                    if stack[0] == "(":
                        result.append(")")
                    else:
                        result[-1] += ")"
                    stack.pop()
                return []
            stack.pop()
            temp += char
        else:
            while stack and char != stack[-1]:
                temp += char
                stack.pop()
            if not stack:
                result.append(temp)
                temp = ""
    while stack:
        if stack[0] == "(":
            result.append(")")
        else:
            result[-1] += ")"
        stack.pop()

    return [temp] + result