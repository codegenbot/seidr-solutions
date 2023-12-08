def separate_paren_groups(paren_string: str) -> List[str]:
    open_count = 0
    close_count = 0
    result = []
    current_group = ''
    for char in paren_string:
        if char == '(':
            open_count += 1
        elif char == ')':
            close_count += 1
        if open_count == close_count:
            result.append(current_group)
            current_group = ''
            open_count = 0
            close_count = 0
        else:
            current_group += char
    return result