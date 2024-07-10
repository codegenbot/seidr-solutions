def modp(n: int, p: int):
    if n < 0:
        n += p
    if n == 0:
        return 0
    return pow(n, p - 2, p) if gcd(n, p) == 1 else None


def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a