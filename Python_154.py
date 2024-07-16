def cycpattern_check(a: str, b: str) -> bool:
    return len(a) == len(b) and (b in a*2 or b in a[::-1]*2)