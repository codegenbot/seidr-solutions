```
def cycpattern_check(a, b):
    if len(b) > len(a) // 2:
        return False
    a = a + a
    for i in range(len(a)):
        if a[i : i + len(b)].lower() == b.lower():
            return True
    return False