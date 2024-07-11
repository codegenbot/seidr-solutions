from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp_str = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            temp_str += char
        elif char == ")":
            while len(stack) and stack[-1] != "(":
                temp_str += stack.pop()
            if not stack or stack.pop() != "(":
                return []
            temp_str += char
        else:
            temp_str += char
    result.append(temp_str)

    temp_str = ""
    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            temp_str += char
        elif char == ")":
            while len(stack) and stack[-1] != "(":
                temp_str += stack.pop()
            if not stack or stack.pop() != "(":
                return []
            temp_str += char
        else:
            temp_str += char
    result.append(temp_str)

    return [s for s in result if s]