from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not paren_string:
        return "Input is empty"
    
    if paren_string.count("(") != paren_string.count(")"):
        return "Invalid input: Unbalanced parentheses"
    
    result = []
    group = ""
    level = 0
    
    for char in paren_string:
        if char == "(":
            if level > 0:
                group += char
            level += 1
        elif char == ")":
            level -= 1
            if level > 0:
                group += char
            if level == 0:
                result.append(group + char)
                group = ""
    
    return result