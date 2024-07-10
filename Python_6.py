def parse_nested_parens(paren_string: str) -> list:
    stack = []
    groups = []
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack:
                temp_group = ''
                while stack[-1] != '(':
                    temp_group += stack.pop()
                stack.pop()  # Remove the '('
                groups.append(int(temp_group.replace('(','-').replace(')', '')))
    
    return [int(x) for x in str(groups).replace('(','-').replace(')', '').split() if x.isdigit()]