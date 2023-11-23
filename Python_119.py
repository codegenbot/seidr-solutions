def match_parens(lst):
    stack = []
    parentheses = {'(': ')'}
    
    for c in lst:
        if c in parentheses:
            stack.append(c)
        elif c != parentheses[stack.pop()]:
            return 'No'
    
    return 'Yes' if not stack else 'No'