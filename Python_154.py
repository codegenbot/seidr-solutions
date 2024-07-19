def cycpattern_check(a: str, b: str) -> bool:
    if len(a) != len(b):
        return False
    for i in range(len(a)):
        if a == b[i:] + b[:i] or b == a[i:] + a[:i]:
            return True
    return False