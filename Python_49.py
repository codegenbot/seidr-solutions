from math import gcd

def modp(n: int, p: int):
    if gcd(p, n) == 1:
        return pow(n, (p-1)//gcd(p,n), p) * n % p
    else:
        return n