```
import math

def modp(n: int, p: int) -> int:
    if math.gcd(n, p) != 1:
        return None
    for i in range(1, p):
        if (i * n) % p == 1:
            return i
    return None

print(modp(3, 5))