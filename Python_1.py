def separate_paren_groups(input_str):
    result = []
    stack = []
    current_sequence = ''
    
    for char in input_str:
        if char == '(':
            stack.append('(')
            current_sequence += '('
        elif char == ')' and stack:
            stack.pop()
            current_sequence += ')'
            if not stack:
                result.append(current_sequence)
                current_sequence = ''
    
    return result