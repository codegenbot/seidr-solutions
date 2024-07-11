```
import math


def modinv(a: int, m: int):
    if math.gcd(a, m) != 1:
        return None
    a = a % m
    t = 0
    newt = 1
    r = m
    newr = a

    while newr != 0:
        quotient = r // newr
        t, newt = newt, t - quotient * newt
        r, newr = newr, r - quotient * newr

    if r > 1:
        return None
    if t < 0:
        t = t + m

    return t


def modp(n: int, p: int):
    if math.gcd(n, p) != 1:
        return None
    return pow(n, modinv(p-2, p), p) * n % p