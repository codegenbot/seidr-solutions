def modp(n: int, p: int):
    if pow(n, p - 1, p) == 1:
        return pow(n, -1, p)
    else:
        return None