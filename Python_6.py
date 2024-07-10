def parse_nested_parens(paren_string: str) -> list:
    if not paren_string:
        return []

    groups = []
    temp_group = ''
    stack = []
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
            temp_group += '('
        elif char == ')':
            if stack:
                stack.pop()
                temp_group += ')'
            else:
                temp_group += ')'
        elif char.isdigit():
            temp_group += char

    while stack:
        groups.append(-int(temp_group.replace('(','-').replace(')', '')))
        temp_group = ''
    
    return [int(x) for x in str(groups).replace('(','-').replace(')', '').split() if x.isdigit()]