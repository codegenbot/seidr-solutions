```
def cycpattern_check(a, b):
    for i in range(len(a)-len(b)+1):
        if (a * 2).find(a) >= i and (a * 2).find(a) % len(a) < i:
            return True
    return False