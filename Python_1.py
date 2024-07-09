from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if set(paren_string) != {"(", ")"} or len(paren_string) % 2 != 0 or paren_string.count("(") != len(paren_string) // 2:
        return []

    result = []
    temp = ""
    open_count = 0

    for char in paren_string:
        if char == "(":
            open_count += 1
            if open_count == 1:
                temp = ""
        elif char == ")":
            open_count -= 1
            if open_count == 0:
                result.append(temp)
        else:
            if open_count > 0:
                temp += char

    return result