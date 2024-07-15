def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    stack = []
    
    for char in paren_string:
        if char == "(":
            if stack:
                current_group += char
            stack.append("(")
        elif char == ")":
            if stack:
                current_group += char
            stack.pop()
            if not stack:
                result.append(current_group)
                current_group = ""
    
    return result