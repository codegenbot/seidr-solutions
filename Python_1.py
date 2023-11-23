paren_string = "((ab)(cd)(ef))"

def separate_paren_groups(string):
    stack = []
    result = []
    current_group = ""
    
    for char in string:
        if char == "(":
            stack.append(current_group)
            current_group = ""
        elif char == ")":
            if current_group:
                stack.append(current_group)
                current_group = ""
            group = stack.pop()
            if stack:
                stack[-1] += group
            else:
                result.append(group)
        else:
            current_group += char
    
    return result

separate_paren_groups(paren_string)