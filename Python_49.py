```
import math

def modp(n: int, p: int):
    if n < 2 or p < 2:
        return None
    if math.gcd(n, p) != 1:
        return None
    
    result = pow(n, p - 2, p) * n % p
    return result