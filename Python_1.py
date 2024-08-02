from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp = ""
    for char in paren_string:
        if char == "(":
            if stack:
                temp += char
            stack.append(char)
        elif char == ")":
            stack.pop() if stack else None
            temp += char
            if not stack:
                result.append(temp)
                temp = ""
    return result