def parse_nested_parens(paren_string: str) -> list:
    if not paren_string:
        return []
    
    groups = []
    temp_group = ''
    for char in paren_string:
        if char == '(':
            temp_group += '('
            if not temp_group.count('('):
                groups.append(int(temp_group.replace('(', '-').replace(')', '')))
                temp_group = ''
        elif char == ')':
            temp_group += ')'
            if temp_group.count('(') == 1:
                temp_group = ''
        elif char.isdigit():
            temp_group += char

    return [int(x) for x in str(groups).replace('(','-').replace(')', '').split() if x.isdigit()]