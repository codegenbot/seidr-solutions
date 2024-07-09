```Python
def match_parens():
    lst = [line.strip() for line in input().split(',')]
    
    open_count = 0
    close_count = 0
    
    for s in lst:
        if s[0] == '(':
            open_count += 1
        elif s[0] == ')':
            close_count += 1
            
        if len(s) != 2 or s[0] != s[1]:
            return 'No'
            
    if open_count == close_count:
        return 'Yes'
    else:
        return 'No'

print(match_parens())