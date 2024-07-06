def modp(n: int, p: int):
    if gcd(n, p) != 1:
        return None
    else:
        return pow(n, (p - 1) // 2, p)