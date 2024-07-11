Here is the solution:

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ''
    opened = 0
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            opened += 1
            group += char
        elif char == ')':
            opened -= 1
            group += char
            if opened == 0:
                result.append(group)
                group = ''
    return result