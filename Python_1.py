from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    count = 0

    for char in paren_string:
        if count == 0:
            result.append(current_group)
            current_group = ""
        
        current_group += char
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
        
    result.append(current_group)  # Append the final group if any
    return result