from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    count_open = 0
    for char in paren_string:
        temp += char
        if char == "(":
            count_open += 1
        elif char == ")":
            count_open -= 1
            if count_open == 0:
                result.append(temp)
                temp = ""
    return result