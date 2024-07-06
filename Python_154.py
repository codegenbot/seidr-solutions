```python
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    a = sorted((a, b), key=len)
    for i in range(len(a[0])):
        if a[0][i:] + a[0][:i] == a[1]:
            return True
    return False