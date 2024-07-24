```
def match_parens(lst):
    s1, s2 = lst
    stack = []
    open_count = 0
    close_count = 0
    for c in s1 + s2:
        if c == '(':
            stack.append(c)
            open_count += 1
        elif c == ')':
            if not stack or stack.pop() != '(':
                return 
            close_count += 1
    if stack or open_count != close_count:
        return 
    return