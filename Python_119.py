def match_parens(lst):
    stack = []
    count = 0
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
                count += 1
            elif c == ')':
                if not stack or stack[-1] != '(':
                    return 'No'
                stack.pop()
                count -= 1
    
    return 'Yes' if count == 0 else 'No'