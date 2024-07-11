def modp(n: int, p: int):
    if p > 2:
        return pow(n, p - 1, p)
    else:
        return n