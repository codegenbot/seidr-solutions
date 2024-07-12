```
def match_parens(lst):
    s1 = ''.join(map(str, lst[0]))
    s2 = ''.join(map(str, lst[1]))
    
    stack = []
    
    for char in s1 + s2:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack or stack.pop() != '(':
                return 'No'
    
    if stack:
        return 'No'
    else:
        return 'Yes'