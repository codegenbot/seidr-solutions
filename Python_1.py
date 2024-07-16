from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char in "()":
            temp += char
            if char == ")" and len(temp) > 1:  # Change & to ) for correct check
                result.append(temp)
                temp = ""
    return result