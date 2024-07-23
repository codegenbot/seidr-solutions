```
def modp(n: int, p: int):
    if gcd(n, p) == 1:
        inv = pow((p - 1), (p - 2), p)
        return pow(n, inv, p)
    else:
        return None

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a