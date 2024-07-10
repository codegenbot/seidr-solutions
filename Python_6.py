```
def parse_nested_parens(paren_string: str) -> list:
    if not paren_string:
        return []
    result = []
    current_group = ''
    max_level = 0
    for char in paren_string:
        if char == '(':
            current_group += '('
            max_level += 1
        elif char == ')':
            current_group += ')'
            max_level -= 1
            if max_level == 0:
                group_value = int(current_group.replace('-', '')) 
                result.append(group_value) 
                current_group = ''
                max_level = 0
        elif char.isdigit():
            current_group += char

    return [int(x) for x in current_group.replace('(','-').replace(')', '').replace(',', '').split() if x.isdigit()]