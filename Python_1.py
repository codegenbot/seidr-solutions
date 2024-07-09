from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    open_count = 0

    for char in paren_string:
        if char == "(":
            open_count += 1
            if open_count == 1:
                temp = ""
        elif char == ")":
            if open_count > 0:
                open_count -= 1
                if open_count == 0:
                    result.append(temp)
        else:
            if open_count > 0:
                temp += char

    return result