from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    is_within_parentheses = False
    
    for char in paren_string:
        if is_within_parentheses:
            temp += char
            if char == ")":
                result.append(temp)
                temp = ""
                is_within_parentheses = False
        else:
            if char == "(":
                temp += char
                is_within_parentheses = True
    return result