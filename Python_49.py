```
import math

def modp(n: int, p: int) -> object:
    if math.gcd(n, p) != 1:
        return None
    i = (pow(n, -1, p))
    return i

print(modp(3, 5))