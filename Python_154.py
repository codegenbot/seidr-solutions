```
def cycpattern_check(a, b):
    for i in range(len(min((a, b), key=len)), 0, -1):
        for j in range(len(a) - i + 1):
            if a[j:j+i] == b:
                return True
    return False