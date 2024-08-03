def modp(n: int, p: int):
    if pow(n, p - 1, p) != 1:
        return None
    return pow(n, p - 2, p)