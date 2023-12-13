```python
def match_parens(lst):
    count = 0
    for s in lst:
        for c in s:
            if c == '(':
                count += 1
            elif c == ')':
                if count > 0:
                    count -= 1
                else:
                    return 'No'
    if count == 0:
        return 'Yes'
    else:
        return 'No'
```