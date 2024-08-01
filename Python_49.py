```
def modinv(a: int, m: int):
    if gcd(a, m) != 1:
        return None
    else:
        a, m = abs(a), abs(m)
        x0, x1 = 1, 0
        while m > 0:
            quotient = a // m
            x2 = x1 - quotient * x0
            a, m = m, a % m
            x1, x0 = x0, x2
        return x0

def gcd(a: int, b: int):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def modp(n: int, p: int):
    return pow(n, modinv(p, n), n)