def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c in '()':
                if c == '(':
                    stack.append(c)
                elif len(stack) == 0 or stack[-1] != '(':
                    stack.append(c)
                else:
                    stack.pop()
    
    return 'No' if len(stack) != 0 else 'Yes'