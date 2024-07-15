```
def match_parens(lst):
    s1, s2 = lst
    stack = []
    
    for char in s1 + s2:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if len(stack) > 0 and stack.pop() == '(':
                continue
            else:
                break
    
    return 'Yes' if not stack else 'No'