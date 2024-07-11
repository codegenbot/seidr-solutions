def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char in "()":
            group += char
        elif char == " ":
            pass
        else:
            result.append(group)
            group = ""
    return result