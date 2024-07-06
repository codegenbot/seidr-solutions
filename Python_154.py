```
def cycpattern_check(a, b):
    if len(b) == 0:
        return True
    if a == b:
        return True
    for i in range(len(a)):
        rotated_a = a[i:] + a[:i]
        for j in range(len(rotated_a)):
            if rotated_a[j:] + rotated_a[:j] == b:
                return True
    return False