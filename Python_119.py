```
def match_parens(lst):
    open_count = 0
    close_count = 0
    for s in lst:
        if len(s) > 1 and s[0] == '(' and s[-1] == ')':
            if s.count('(') != s.count(')'):
                return 'No'
        elif s[0] == '(':
            open_count += 1
        elif s[0] == ')':
            close_count += 1
        if open_count < close_count:
            return 'No'
    return 'Yes' if open_count == close_count else 'No'