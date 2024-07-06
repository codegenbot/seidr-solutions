def modp(n: int, p: int):
    if p == 1:
        return n
    else:
        return (n ** ((p - 1) // gcd(p - 1, p)) * n) % p


def gcd(a: int, b: int):
    while b != 0:
        a, b = b, a % b
    return a