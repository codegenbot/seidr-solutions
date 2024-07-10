def parse_nested_parens(paren_string: str) -> list:
    if not paren_string:
        return []

    groups = []
    temp_group = ''
    stack = []
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
            temp_group += '('
        elif char == ')':
            if stack and stack[-1] == '(':
                while stack and stack[-1] != '(':
                    temp_group += stack.pop()
                stack.pop()  # pop the leading '('
                temp_group += ')'
            else:
                temp_group += ')'
        elif char.isdigit():
            temp_group += char

    if stack:  # remove any remaining open parentheses
        while stack:
            temp_group += stack.pop()

    if temp_group and temp_group.isdigit():
        groups.append(int(temp_group))
    return [groups[0]] if len(groups) == 1 else groups