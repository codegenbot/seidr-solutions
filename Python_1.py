```
def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    current_group = ""
    is_opening = True
    for char in paren_string:
        if (char == "(" and not is_opening):
            current_group += ")"
            result.append(current_group)
            current_group = "("
            is_opening = True
        elif (char == ")" and is_opening):
            current_group += ")"
            is_opening = False
        elif char == "(":
            current_group += char
            is_opening = True
        else:
            if is_opening:
                current_group += char
            else:
                current_group += char
                is_opening = True
    if not current_group.startswith("("):
        result.append(current_group)
    return result