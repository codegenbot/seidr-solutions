from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    level = 0

    for char in paren_string:
        if char == '(':
            level += 1
        elif char == ')':
            level -= 1
            if level < 0:
                level = 0
        
        temp += char

        if level == 0:
            result.append(temp)
            temp = ""

    return result