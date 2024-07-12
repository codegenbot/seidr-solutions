def modp(n: int, p: int):
    if p == 2 or n < 0:
        return None
    if pow(n, (p - 1) // 2, p) != 1:
        return None
    return pow(n, p - 1, p)