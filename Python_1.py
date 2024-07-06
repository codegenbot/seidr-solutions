for char in paren_string:
    ...
    elif char == ")":
        stack.pop()
        group += char  
        if not stack:  
            result.append(group)
            group = ""