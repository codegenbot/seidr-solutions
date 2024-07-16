def cycpattern_check(a: str, b: str) -> bool:
    return len(a) == len(b) and a.find(b) != -1 and a.find(b) == a.rfind(b)