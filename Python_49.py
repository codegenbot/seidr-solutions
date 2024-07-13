import math

def modp(n: int, p: int) -> object:
    if math.gcd(n, p) != 1:
        return None
    result = pow(n, (p-1)//2, p)
    if result * n % p == 1:
        return result
    return None

print(modp(3, 5))