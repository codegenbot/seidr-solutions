def parse_nested_parens(paren_string: str) -> list:
    result = []
    stack = []
    temp_group = ''
    in_group = False
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
            temp_group += '('
            in_group = True
        elif char == ')':
            while stack and stack[-1] != '(':
                temp_group += stack.pop()
            stack.pop()  # pop the leading '('
            temp_group += ')'
            in_group = False
        elif char.isdigit():
            if not in_group:
                continue
            temp_group += char
    
    while stack:  
        temp_group += stack.pop()

    group = []
    if temp_group.isdigit():
        group = [int(temp_group)]
    else:
        for digit in temp_group:
            if digit == '(' or digit == ')':
                break
            group.append(int(digit))
    
    result.extend(group)
    
    return result