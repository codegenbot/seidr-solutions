def modp(n: int, p: int):
    if gcd(n, p) == 1:
        return pow(n, inv((p - 1), p), p)
    else:
        raise ValueError("n and p are not coprime")