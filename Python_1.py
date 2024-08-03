from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if (paren_string.count('(') != paren_string.count(')')) or (paren_string[0] != '(') or (paren_string[-1] != ')'):
        return []
    
    result = []
    temp = ""
    count = 0

    for char in paren_string:
        if char == "(":
            count += 1
            temp += char
        elif char == ")":
            count -= 1
            temp += char
            if count == 0:
                result.append(temp)
                temp = ""

    return result