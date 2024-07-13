```
import math

def modp(n: int, p: int):
    if math.gcd(n, p) == 1:
        inv = pow(n, (p-1)//2, p)
        return pow(n, (p+1)//4, p) * (pow(2, (p+1)//4, p) * (inv*inv if n%2 else 1)) % p
    else:
        return 0