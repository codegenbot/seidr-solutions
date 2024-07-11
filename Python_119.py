def match_parens():
    lst = []
    while True:
        s = input("Enter a string (or 'stop' if finished): ")
        if s.lower() == 'stop':
            break
        lst.append(s)
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) == 0:
                    return 'No'
                else:
                    stack.pop()
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'