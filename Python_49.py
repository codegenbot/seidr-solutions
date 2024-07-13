```
import math

def modp(n: int, p: int) -> object:
    if math.gcd(n, p) != 1:
        return None
    for i in range(2, p):
        if (i * i % p == n % p):
            return i
    return None

print(modp(3, 5))