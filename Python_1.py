from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    start = 0
    for i, char in enumerate(paren_string):
        if char == "(":
            stack.append(i)
        elif char == ")":
            if stack:
                start = stack.pop()
                result.append(paren_string[start:i+1])
    return result