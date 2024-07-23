def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a

def modp(n: int, p: int):
    return pow(n, p - 2, p) * (n % p) if gcd(p-1, n) == 1 else 0