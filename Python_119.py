def match_parens(lst):
    s1 = lst[0]
    s2 = lst[1]
    
    stack = []
    
    for char in str(s1) + str(s2):
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack or stack.pop() != '(':
                return 'No'
    
    return 'Yes' if not stack else 'No'