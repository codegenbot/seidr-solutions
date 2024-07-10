```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        k = i
        j = 0
        while True:
            if a[k] != b[j]:
                break
            k = (k + 1) % len(a)
            j += 1
            if j == len(b):
                return True
    for i in range(j, len(a)):
        if a[i] != b[0]:
            return False
        k = (i + 1) % len(a)
        j += 1
        while j < len(b):
            if a[k] != b[j]:
                return False
            k = (k + 1) % len(a)
            j += 1
    return True