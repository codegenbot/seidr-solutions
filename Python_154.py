def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        pattern = a[i:i+len(b)]
        if pattern * (len(a) // len(b)) + pattern[:len(a)%len(b)] == a:
            return True
    return False