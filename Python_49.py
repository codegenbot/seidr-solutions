```Python
import math

def modp(n: int, p: int):
    if math.gcd(n, p) == 1:
        return pow(n, (p-1)//2, p) * n % p
    else:
        return None

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a