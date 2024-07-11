```
def separate_paren_groups(s: str) -> List[str]:
    result = []
    group = ''
    is_grouping = False
    for char in s:
        if char == '(':
            is_grouping = True
        elif char == ')':
            result.append(group)
            group = ''
            is_grouping = False
        elif is_grouping:
            group += char
    if group:
        result.append(group)
    return [g for g in result if g]