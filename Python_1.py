```
def separate_paren_groups(paren_string: str) -> List[str]:
    def balance_parenthesis(s):
        count = 0
        for char in s:
            if char == '(':
                count += 1
            elif char == ')':
                count -= 1
            if count == 0:
                return s[:s.index(char)+1] + s[s.index(char)+1:]
        return ''

    stack = []
    result = []
    temp = ''
    for char in paren_string:
        if char.isspace():
            continue
        if char == '(':
            stack.append(char)
            temp += char
        elif char == ')':
            stack.pop()
            temp += char
            if not stack:
                result.append(balance_parenthesis(temp))
                temp = ''

    return result