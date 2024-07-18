from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
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