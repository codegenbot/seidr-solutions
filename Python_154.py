def cycpattern_check(a: str, b: str) -> bool:
    if a != b:
        return False
    return len(a) == len(b) and b in a + a