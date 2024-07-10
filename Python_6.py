```
def parse_nested_parens(paren_string: str) -> list:
    if not paren_string:
        return []

    groups = []
    temp_group = ''
    stack = []
    in_group = False
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
            temp_group += '('
            in_group = True
        elif char == ')':
            if stack and stack[-1] == '(':
                while stack and stack[-1] != '(':
                    temp_group += stack.pop()
                stack.pop()  # pop the leading '('
                temp_group += ')'
            else:
                temp_group += ')'
            in_group = False
        elif char.isdigit():
            if not in_group:
                continue
            temp_group += char
    
    if stack:  # remove any remaining open parentheses
        while stack:
            temp_group += stack.pop()

    if temp_group.isdigit():
        result = [int(temp_group)]
    else:
        result = []

    return [] if len(result) <= 1 else result