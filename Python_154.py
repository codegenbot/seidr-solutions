```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    if a[:len(b)] != b:
        return False
    for i in range(len(b), len(a)):
        temp_a = a[i:]
        if temp_a.startswith(b):
            return True
    return False