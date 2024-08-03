```
def match_parens(lst):
    s1 = ''.join(lst[0])
    s2 = ''.join(lst[1])
    
    if sum(c == '(' for c in s1) + sum(c == ')' for c in s2) % 2 != 0:
        return 'No'
    
    stack = []
    for char in s1 + s2:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack or stack.pop() != '(':
                return 'No'
    
    return 'Yes' if not stack else 'No'