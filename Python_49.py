def modp(n: int, p: int):
    if gcd(n, p) != 1:
        return None
    return pow(n, -1, p)