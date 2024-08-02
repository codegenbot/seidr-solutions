def modp(n: int, p: int):
    if n == 0 or p <= 1:
        return 0
    if n == 1 or p % n == 0:
        return 0
    if __gcd(p, n) != 1:
        raise ValueError("No modular multiplicative inverse exists")
    return pow(n, -1, p)