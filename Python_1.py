Here is the solution:

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
        elif char == ')':
            temp = ''
            while stack and stack.pop() != '(':
                temp += ')'
            if stack:
                result.append('(' + temp + ')')
    return result