```
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp_str = ''
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            temp_str += char
        elif char == ')':
            if temp_str and temp_str[-1] == '(':
                temp_str += char
                result.append(temp_str[1:-1])
                temp_str = ''
            else:
                temp_str += char
    return [temp_str[1:] if temp_str.startswith('(') else temp_str]