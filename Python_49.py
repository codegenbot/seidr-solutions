```
def modp(n: int, p: int):
    if n < 0:
        n += p
    if gcd(n, p) != 1:
        raise ValueError("No multiplicative inverse exists")
    return pow(n, p - 2, p)

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a