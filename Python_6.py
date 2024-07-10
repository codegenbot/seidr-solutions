```
def parse_nested_parens(paren_string: str) -> List[int]:
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
            if max_level < 0:
                result.append(-max_level)
                max_level = 0
                if not current_group:
                    continue
                while current_group and current_group[0] == '(':
                    group_value = int(current_group[1:-1])
                    result.append(group_value)
                    current_group = current_group[1:-1]
        elif char.isdigit():
            current_group += char
    return [int(x) for x in current_group.replace('(','-').replace(')', '').split(',')] + result