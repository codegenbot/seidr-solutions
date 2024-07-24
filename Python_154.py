```
def cycpattern_check(a, b):
    b_len = len(b)
    for i in range(len(a)):
        k = 0
        while k < len(a) and a[k:k+b_len] == b:
            k += b_len
        if k >= len(a):
            return True
    return False