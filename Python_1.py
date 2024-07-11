```
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ''
    for char in paren_string:
        if char.isspace():
            if group:
                result.append(group)
                group = ''
        elif char == '(':
            if group and group[-1] != ')':
                group += ' ('
        elif char == ')':
            if group and group[-1] != '(':
                group += ' )'
        else:
            if group:
                group += char
    if group:
        result.append(group)
    return [group for group in set(tuple(group) for group in set(frozenset(group.split()) for group in result))]