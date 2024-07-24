def modp(n: int, p: int):
    if p == 1:
        return n
    return pow(n, p-1, p) * pow(n, 1, p) % p