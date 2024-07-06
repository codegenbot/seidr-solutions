def modp(n: int, p: int):
    if pow(n, (p - 1) // 2, p) != p - 1:
        return n % p
    else:
        return pow(n, p - 2, p)