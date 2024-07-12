def modp(n: int, p: int):
    if gcd(p, n) == 1:
        return pow(n, p - 1, p) * n % p
    else:
        return None


def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a