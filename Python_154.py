def cycpattern_check(a: str, b: str) -> bool:
    return len(a) == len(b) and b in a + a \
        and all(char in a for char in b)