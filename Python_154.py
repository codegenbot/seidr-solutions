```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    while len(a) >= len(b):
        if a[:len(b)] == b:
            return True
        a = a[1:] + a[:1]  # move the first character to the end
    return False