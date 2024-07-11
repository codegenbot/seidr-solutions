```
def separate_paren_groups(s: str) -> List[str]:
    result = []
    temp = ''
    for char in s:
        if char == '(':
            if temp:
                result.append(temp)
                temp = ''
        elif char == ')':
            temp += char
        else:
            temp += char
    if temp:
        result.append(temp)
    return result