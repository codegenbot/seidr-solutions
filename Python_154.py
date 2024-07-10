def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        k = i
        j = 0
        while j < len(b):
            if a[k] != b[j]:
                break
            k = (k + 1) % len(a)
            j += 1
        if j == len(b):
            if all(a[k:k+len(b)]==b for k in range(i+len(b),len(a))):
                return True
    return False