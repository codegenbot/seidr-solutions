from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    counter = 0
    group = ""

    for char in paren_string:
        if char == "(":
            counter += 1
            group += char
        elif char == ")" and counter > 0:
            counter -= 1
            group += char
        elif char == ")" and counter == 0:
            result.append(group)
            group = ""

    return result