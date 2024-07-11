```
def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    current_group = ''
    group_opened = False
    for char in paren_string:
        if char == ' ' and group_opened:
            groups.append(current_group.strip())
            current_group = ''
            group_opened = False
        elif char in ['(', '[', '{']:
            group_opened = True
            current_group += char
        elif char in {')': ')', ']': '[', '}': '{'}:
            if group_opened:
                current_group += char
                if current_group[0] == current_group[-1]:
                    groups.append(current_group.strip())
                    current_group = ''
                    group_opened = False
    if group_opened:
        groups.append(current_group.strip())
    return groups