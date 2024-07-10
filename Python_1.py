def separate_paren_groups(input_string):
    open_count = 0
    current_group = ""
    result = []
    
    for char in input_string:
        if char == '(':
            open_count += 1
            current_group += char
        elif char == ')':
            open_count -= 1
            current_group += char
            
            if open_count == 0:
                result.append(current_group)
                current_group = ""
    
    return result