```
def cycpattern_check(a, b):
    a_len = len(a)
    for i in range(a_len):
        for j in range(min(j+1, a_len-i)):
            if a[i : i + (j + 1)] == b:
                return True
    return False