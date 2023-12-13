```python
def match_parens(lst):
    count = -1
    for s in lst:
        if s == '(':
            count += 1
        else:
            count -= 1
        if count <= 0:
            return 'No'
    return 'No'
```