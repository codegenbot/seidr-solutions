def modp(n: int, p: int):
    if n < 0:
        n = -n
    if math.gcd(n, p) != 1:
        return None
    return pow(n, p-2, p)