```
from math import gcd
import functools
def modp(n: int, p: int):
    if gcd(n, p) == 1:
        if n % 2 == 0 and p % 2 == 0:
            return pow(4, inv((p // 2 - 1), p), p)
        else:
            return pow(n, inv((p - 1), p), p)
    else:
        return None

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a

def inv(a: int, m: int):
    t, newt = 0, 1
    r, newr = m, a
    while newr != 0:
        quotient = r // newr
        t, newt = newt, t - quotient * newt
        r, newr = newr, r - quotient * newr
    if r > 1:
        return None
    if t < 0: 
        t = t + m
    return t