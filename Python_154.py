def cycpattern_check(a: str, b: str) -> bool:
    return a != b and (b in a * 2 or a in b * 2)