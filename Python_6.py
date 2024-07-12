for group in paren_string.split():
    if group:  
        level = 0
        max_level = 0
        for char in group:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
            max_level = max(max_level, level)
        result.append(max_level)