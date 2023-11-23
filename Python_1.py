def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    separated_paren_groups = []
    open_braces = 0
    start_index = 0
    
    for i in range(len(paren_string)):
        if paren_string[i] == "(":
            open_braces += 1
        elif paren_string[i] == ")":
            open_braces -= 1
            
        if open_braces == 0:
            separated_paren_groups.append(paren_string[start_index:i+1])
            start_index = i+1
            
    return separated_paren_groups