def cycpattern_check(a: str, b: str) -> bool:
    return len(a) >= len(b) and b in a * (len(a) // len(b) + 1)