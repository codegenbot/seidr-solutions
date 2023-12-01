def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    count = 0
    curr_group = ''
    for paren in paren_string:
        if paren == '(':
            count += 1
            curr_group += paren
        elif paren == ')':
            count -= 1
            curr_group += paren
            if count == 0:
                groups.append(curr_group)
                curr_group = ''
    return groups
    
print(separate_paren_groups('( ) (( )) (( )( ))'))