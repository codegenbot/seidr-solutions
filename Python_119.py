```
def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c.lower() == '(': 
                stack.append(c)  
            elif c.lower() == ')': 
                if not stack: 
                    return False  
                stack.pop()
    return not stack