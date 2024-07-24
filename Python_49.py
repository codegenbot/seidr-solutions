```
def modp(n: int, p: int):
    if gcd(n, p) != 1:
        return None
    def gcd(a: int, b: int):
        while b:
            a, b = b, a % b
        return a
    return pow(n, -1, p) * n % p