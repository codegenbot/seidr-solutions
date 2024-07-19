def cycpattern_check(a: str, b: str) -> bool:
    return len(a) == len(b) and b in a * 2 or len(a) == len(b) * 2 and a in b * 2