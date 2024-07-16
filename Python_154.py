def cycpattern_check(a: str, b: str) -> bool:
    return len(a) == len(b) and sorted(a) == sorted(b)