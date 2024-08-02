from typing import List

def separate_paren_groups(text: str) -> List[str]:
    result = []
    stack = []
    groups = ""
    
    for char in text:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            groups += char
        elif char == ")":
            stack.pop()
            if not stack:
                result.append(groups + char)
                groups = ""
    
    return result