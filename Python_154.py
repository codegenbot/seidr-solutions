```
def cycpattern_check(a, b):
    a = ''.join(e for e in a if e.isalnum()).lower()
    b = ''.join(e for e in b if e.isalnum()).lower()
    for i in range(len(a)):
        temp = (a[i:] + a[:i]).lower()
        if sorted(temp) == sorted(b):
            return True
    return False