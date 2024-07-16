def cycpattern_check(a: str, b: str) -> bool:
    return len(a) == len(b) and any(b in a[i:] + a[:i] for i in range(len(a)))