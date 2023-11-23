def match_parens(lst):
    stack = []
    parentheses = {'(': ')', '[': ']', '{': '}'}

    for c in lst:  
        if c in parentheses:
            stack.append(c)
        elif c in parentheses.values():
            if not stack or parentheses[stack.pop()] != c:
                return 'No'
        elif c not in parentheses.values() and c not in parentheses:
            continue  

    return 'Yes' if not stack else 'No'