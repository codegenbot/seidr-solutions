def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')' and (len(stack) == 0 or stack[-1] != '('):
                return 'No'
            stack.pop()  # Move stack.pop() outside the if block
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'