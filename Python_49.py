def modp(n: int, p: int):
    if p == 1:
        return 0
    if n < p:
        return pow(n, -1, p)
    if gcd(n, p) != 1:
        return pow(n, modp(p, p), p)
    if p == 2:
        return 1
    return 1