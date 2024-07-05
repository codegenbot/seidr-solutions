import math

def modp(n: int, p: int):
    if p == 1:
        return n % p
    result = pow(n, p - 1, p)
    return n * result % p if math.gcd(result, p) == 1 else n % p