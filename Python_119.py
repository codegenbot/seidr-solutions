```
def match_parens(lst):
    stack = []
    for s in lst:
        if s.startswith('('):
            while len(s) > 1 and s[1] == '(':
                s = s[2:]
            stack.append('(')
        elif s:
            if s.startswith(')'):
                while len(stack) and stack.pop() != '(':
                    pass
                if not stack:
                    return 'No'
            else:
                for c in s:
                    if c == '(':
                        stack.append(c)
                    elif c == ')':
                        if len(stack) == 0:
                            return 'No'
                        stack.pop()
        else:
            return 'No'
    return 'Yes' if not stack else 'No'