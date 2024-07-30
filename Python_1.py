from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    for char in paren_string:
        if char in "()":
            current_group += char
        elif current_group:
            result.append(current_group)
            current_group = ""
        else:
            current_group += char
    if current_group:
        result.append(current_group)
    return result

result = separate_paren_groups("(()())(())")