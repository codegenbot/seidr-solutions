def cycpattern_check(a: str, b: str) -> bool:
    return b in a + a and len(a) == len(b) and a in b + b