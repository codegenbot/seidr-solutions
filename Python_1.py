```
def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ''
    nesting_level = 0
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            nesting_level += 1
            group += char
        elif char == ')':
            nesting_level -= 1
            group += char
            if nesting_level == 0:
                groups.append(group)
                group = ''
    return groups