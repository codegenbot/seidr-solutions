```
import math

def modp(n: int, p: int):
    if math.gcd(n, p) != 1:
        return None
    result = pow(n, (p-1)//2, p)
    if result * n % p == 1:
        return result
    return None