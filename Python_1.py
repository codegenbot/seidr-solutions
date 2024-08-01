from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(" and temp:  # Add 'and temp' condition
            result.append(temp)
            temp = char
        else:
            temp += char
    if temp:  # Add this to handle remaining characters
        result.append(temp)
    return result