from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack, temp = [], ""
    
    for char in paren_string:
        if char == "(":
            if temp and stack:
                temp += char
            stack.append(char)
        elif char == ")":
            if not stack:
                return ["Invalid Input"]
            stack.pop()
            temp += char
            if not stack:
                result.append(temp)
            if not stack:
                temp = ""
    
    if stack:
        return ["Invalid Input"]
    return result