```
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ''
    in_group = False
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(' and not in_group:
            in_group = True
            group = ''
        elif char == ')' and in_group:
            in_group = False
            result.append(group + ')')
        elif in_group:
            group += char
    return result