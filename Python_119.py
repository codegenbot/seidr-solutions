`def match_parens(lst):`
```
    stack = []
    for s in lst:
        while '(' in s:
            s = s.replace('(', '', 1)
            stack.append('(')
        while ')' in s:
            s = s.replace(')', '', 1)
            if len(stack) == 0:
                return 'No'
            else:
                stack.pop()
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'```