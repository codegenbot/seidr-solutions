def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        for j in range(min(i+1, len(b))+1):
            if a[i-j:i] != b[:j]:
                break
        else:
            return True
    return False