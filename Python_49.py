```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def modp(n: int, p: int):
    return pow(n, p - 2, p) if gcd(n, p) == 1 else None