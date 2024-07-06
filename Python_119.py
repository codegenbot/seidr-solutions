```python
def `match_parens`(list`):
    stack = []
    for s in list:
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