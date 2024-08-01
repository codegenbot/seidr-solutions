def modinv(a: int, p: int):
    if gcd(a, p) != 1:
        return None
    else:
        a, p = abs(a), abs(p)
        x0, x1 = 1, 0
        while p > 0:
            quotient = a // p
            x2 = x1 - quotient * x0
            a, p = p, a % p
            x1, x0 = x0, x2
        return x0


def gcd(a: int, b: int):
    while b != 0:
        a, b = b, a % b
    return abs(a)