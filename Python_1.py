from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
  
    paren_string = "".join(filter(lambda x: x in ['(', ')'], paren_string))
  
    for char in paren_string:
        if char == "(":
            current_group += char
        elif char == ")":
            if current_group:
                current_group += char
                result.append(current_group)
                current_group = ""
    return result