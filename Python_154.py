def cycpattern_check(a: str, b: str) -> bool:
    return len(a) == len(b) and b in (a + a) and a in (b + b) and len(a) == len(set(a))