from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if "(" not in paren_string or ")" not in paren_string:
        return ["Input string does not contain parentheses"]
    
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
                result.append(group)
                group = ""
        else:
            group += char
    
    return result