def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    count = 0
    
    for char in paren_string:
        if char == "(":
            count += 1
        current_group += char
        
        if char == ")" and count > 0:
            count -= 1
        if count == 0 and current_group:
            result.append(current_group)
            current_group = ""
    
    return result