def modp(n: int, p: int):
    if gcd(n, p) != 1:
        return None
    return pow(n, p - 2, p)

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a