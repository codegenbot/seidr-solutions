def cycpattern_check(a: str, b: str) -> bool:
    return len(a) == len(b) and (a in b + b or b in a + a)