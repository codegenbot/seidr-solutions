```
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

    groups.append(int(temp_group))
    temp_group = ''
    stack = []
while stack or temp_group:
    for char in paren_string[len(groups[-1]):]:
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
    groups.append(int(temp_group))
    temp_group = ''
    stack = []
return groups