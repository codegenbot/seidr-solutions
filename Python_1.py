def separate_paren_groups(input_str):
    stack = []
    result = []
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
        else:
            stack = []
            current_sequence = ''  # Reset current_sequence here
                
    return result