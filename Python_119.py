def match_parens(lst):
    stack = []
    for s in lst:
        opening_count = 0
        for c in s:
            if c == '(':
                stack.append(c)
                opening_count += 1
            elif c == ')':
                if not stack:  
                    return 'No'
                else:
                    stack.pop()
                    if opening_count > 0:
                        opening_count -= 1
        if opening_count > 0:
            while opening_count > 0:
                if not stack:  
                    return 'No'
                else:
                    stack.pop()
                    opening_count -= 1
    return 'Yes' if not stack else 'No'