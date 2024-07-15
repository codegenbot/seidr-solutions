def cycpattern_check(a: str, b: str) -> bool:
    return any(b in a[i:] + a[:i] for i in range(len(a)))