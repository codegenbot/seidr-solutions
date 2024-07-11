```
def modp(n: int, p: int):
    if math.gcd(n, p) != 1:
        return None
    else:
        return pow(n, p - 2, p) * n % p