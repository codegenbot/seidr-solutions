```
def separate_paren_groups(s: str) -> List[str]:
    def check(c):
        if c == '(':
            return True
        elif c == ')':
            return False
    result = ''
    groups = []
    for char in s:
        if char == '(':
            if not groups or check(groups[-1]):
                groups.append(result)
                result = ''
            else:
                result += char
        else:
            if not check(result[0]):
                result += char
            else:
                groups.append(result)
                result = char
    if result:
        groups.append(result)
    return [group.strip() for group in groups]