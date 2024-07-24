```python
def match_parens(lst):
    if any(c not in '()()' for c in lst[0] + lst[1]):
        return "No"
    stack = []
    for c in lst[0] + lst[1]:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if not stack:
                return 'No'
            stack.pop()
    if stack:
        return 'No'
    return 'Yes'