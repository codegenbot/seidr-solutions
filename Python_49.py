def modp(n: int, p: int):
    if n < 0 or p <= 1:
        return None
    if n % p == 0:
        return 1
    else:
        return pow(n, p - 2, p) * (n % p)