for char in paren_string:
    if char == ' ':
        continue
    if char == '(':
        stack.append(char)
        temp_str += char
    elif char == ')':
        if stack and stack[-1] == '(':
            stack.pop()
            temp_str += char
            result.append(temp_str)
            temp_str = ''
elif stack:  # handle unmatched '(' at the end of the string
    while stack:
        temp_str += stack.pop() + ')'
    result.append(temp_str)