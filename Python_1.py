def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    curr_group = []
    open_paren_count = 0

    for char in paren_string:
        if char == '(':
            if open_paren_count > 0:
                curr_group.append(char)
            open_paren_count += 1
        elif char == ')':
            open_paren_count -= 1
            if open_paren_count > 0:
                curr_group.append(char)
            else:
                result.append(''.join(curr_group))
                curr_group = []
        elif open_paren_count > 0:
            curr_group.append(char)

    return result