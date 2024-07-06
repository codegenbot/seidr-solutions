def modp(n: int, p: int) -> int:
    if p == 0:
        return n
    return pow(n, p, p)