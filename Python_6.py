def parse_nested_parens(paren_string: str) -> list:
    if not paren_string:
        return []
    
    groups = []
    temp_group = ''
    for char in paren_string:
        if char == '(':
            temp_group += '('
        elif char == ')':
            temp_group += ')'
            if not groups or groups[-1] != '(':
                groups.append(int(temp_group))
                temp_group = ''
        elif char.isdigit():
            temp_group += char

    if temp_group and temp_group != '------':
        if temp_group[0] == '(':
            groups.append(int(temp_group.replace('(', '-').replace(')', '')))
        else:
            return []
    else:
        return []

    return [int(x) for x in str(groups).replace('(','-').replace(')', '').split() if x.isdigit()]