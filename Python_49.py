def modp(n: int, p: int):
    if p == 0:
        return None
    return pow(n, p, p)