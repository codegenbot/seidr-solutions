```
def match_parens(lst):
    left = 0
    right = 0
    for c in lst[0]:
        if c == '(':
            left += 1
        else:
            right += 1
    for c in lst[1]:
        if c == '(':
            left -= 1
        else:
            right -= 1
    return "Yes" if (left >= 0 and right <= left) or (len(lst) == 1 and lst[0] == ')') else "No"
```