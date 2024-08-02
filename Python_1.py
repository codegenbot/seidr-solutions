```
def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    temp_group = ''
    count = 0
    for char in paren_string:
        if char == '(':
            count += 1
            temp_group += '('
        elif char == ')':
            count -= 1
            temp_group += ')'
            if count == 0:
                groups.append(temp_group)
                temp_group = ''
    return groups