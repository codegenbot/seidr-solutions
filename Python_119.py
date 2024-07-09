```
def match_parens(lst):
    str1, str2 = lst
    open_count = 0
    close_count = 0
    
    for char in str1:
        if char == '(':
            open_count += 1
        elif char == ')':
            close_count += 1
            
    for char in str2:
        if char == '(':
            open_count -= 1
        elif char == ')':
            close_count -= 1
            
    return 'Yes' if open_count == close_count else 'No'