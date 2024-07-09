def modp(n: int, p: int):
    if gcd(n, p) > 1:
        return None
    return pow(n, -1, p)


def gcd(a: int, b: int):
    while b != 0:
        a, b = b, a % b
    return abs(a)