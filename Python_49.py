```
import math
def modp(n: int, p: int):
    if pow(2, p-1, p) != 1:
        return (n * ((pow(2, math.gcd((p-2), 2), p) ** 2) % p)) % p
    else:
        return n % p