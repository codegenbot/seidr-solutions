```
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
                temp_open = temp_group.count('(') - temp_group.count(')')
                if temp_open > 0:
                    temp_group = ''
                else:
                    groups.append(temp_open)
        elif char.isdigit():
            temp_group += char

    return [int(x) for x in str(groups).replace('(','-').replace(')', '').split() if x.isdigit()]