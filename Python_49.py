from math import gcd

def modp(n: int, p: int):
    if p == 1:
        return n % p
    elif p > 1:
        result = pow(n, (p-1)//gcd(n,p), p)
        return n * result % p