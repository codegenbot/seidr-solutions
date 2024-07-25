from collections import Counter

def cycpattern_check(a: str, b: str) -> bool:
    return Counter(a) == Counter(b)