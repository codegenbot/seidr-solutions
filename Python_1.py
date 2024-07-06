from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == " ":  # ignore spaces
            continue
        if char in "():":
            if not stack or char == "(":
                stack.append(char)
                current_group += char
            else:
                while stack and stack[-1] != "(":
                    current_group += stack.pop()
                if not stack:
                    result.append(current_group)
                    current_group = ""
                else:
                    stack.pop()  # match with the opening brace
                    current_group += ")"
        elif char == "(":
            stack.append(char)
            current_group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                current_group += stack.pop()
            if not stack:
                result.append(current_group)
                current_group = ""
            else:
                stack.pop()  # match with the opening brace
                current_group += ")"

    if stack:
        while stack:
            current_group += stack.pop()
        result.append(current_group)

    return [s.strip() for s in result]