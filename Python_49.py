```
import math

def modp(n: int, p: int):
    if math.gcd(n, p) != 1:
        return None
    return ((n ** (p - 2)) * n) % p