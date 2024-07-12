from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    valid = True
    for char in paren_string:
        if char == "(":
            stack.append("(")
            current_group += "("
        elif char == ")":
            if stack:
                stack.pop()
                current_group += ")"
                if not stack:
                    result.append(current_group)
                    current_group = ""
            else:
                valid = False
                break

    if stack or not valid:
        return ["Invalid input string with unbalanced parentheses"]
    else:
        return result