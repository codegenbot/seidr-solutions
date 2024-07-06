```
import math

def modp(n: int, p: int):
    if n < p:
        return n
    else:
        return p * (modp((n - 1) // p, p)) + n % p