from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    curr_group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            curr_group += char
        elif char == ")":
            while len(stack) > 0 and stack[-1] != "(":
                curr_group += stack.pop()
            if len(stack) > 0:
                stack.pop()  # match the '('
            else:
                result.append(curr_group + char)
            curr_group = ""

    return [curr_group + "".join(stack)] if stack else [curr_group]