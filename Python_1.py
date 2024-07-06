```
def solution(paren_string):
    stack = []
    temp_str = ''
    result = []
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            temp_str += char
        elif char == ')':
            stack.pop()
            temp_str += char
            if not stack:
                result.append(temp_str)
                temp_str = ''
    if temp_str:  
        result.append(temp_str)

    return result