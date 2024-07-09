```
def match_parens(lst):
    str1, str2 = lst
    open_count = 0
    close_count = 0
    
    for char in str1:
        if char == '(':
            open_count += 1
        elif char == ')':
            if open_count > 0:
                open_count -= 1
            else:
                close_count += 1
                
    for char in str2:
        if char == '(':
            open_count -= 1
        elif char == ')':
            if open_count > 0:
                open_count -= 1
            else:
                return 'No'
                
    return 'Yes' if open_count == 0 and close_count == 0 else 'No'