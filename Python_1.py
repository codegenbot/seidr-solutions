from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not all(char in "() " for char in paren_string):
        return "Input should consist of a string of parentheses."
    
    result = []
    temp = []
    stack = []
    
    for char in paren_string:
        if char == "(":
            if stack:
                temp.append(char)
            stack.append("(")
        elif char == ")":
            stack.pop()
            if not stack:
                temp.append(char)
                result.append("".join(temp))
                temp = []
            else:
                temp.append(char)
    
    return result