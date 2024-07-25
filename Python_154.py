def cycpattern_check(a: str, b: str) -> bool:
    return a != b and (b in a + a or a in b + b)