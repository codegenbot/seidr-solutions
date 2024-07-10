def parse_nested_parens(paren_string: str) -> list:
    if not paren_string:
        return []

    groups = []
    temp_group = ''
    stack = []
    
    for char in paren_string:
        if char == '(':
            if stack and stack[-1] == '(':
                while stack and stack[-1] != '(':
                    temp_group += stack.pop()
            stack.append(char)
            temp_group += char
        elif char == ')':
            stack.pop()  # pop the matching opening parenthesis
            temp_group += char

    return [int(x) for x in str(temp_group).replace('(','-').replace(')', '').split() if x.isdigit()]