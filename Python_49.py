```
def modp(n: int, p: int):
    return pow(n, mod_inverse(p, n)) % p

def gcd(a: int, b: int):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def mod_inverse(a: int, m: int):
    if gcd(a, m) != 1:
        return None
    def extended_gcd(a, b):
        if a == 0:
            return b, 0, 1
        else:
            gcd, y, x = extended_gcd(b % a, a)
            return gcd, y - (b // a) * x, x

    g, y, x = extended_gcd(a, m)
    if g != 1:
        return None
    return x % m