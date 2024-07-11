from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ''
    stack = []

    for char in paren_string:
        if char == ' ':
            continue
        elif char == '(':
            stack.append(char)
            temp += char
        elif char == ')':
            if stack and stack[-1] == '(':
                stack.pop()
                temp += char
                result.append(temp)
                temp = ''
            else:
                temp += char

    return result