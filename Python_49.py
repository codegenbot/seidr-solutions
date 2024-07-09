def modp(n: int, p: int):
    if gcd(n, p) > 1:
        return pow(n, -1, p)
    return None