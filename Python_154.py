def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        for j in range(i + 1, len(a) + 1):
            substring = a[i:j]
            if substring * (len(b) // len(substring) + 1)[:-len(substring)] == b:
                return True
    return False