```
def modp(n: int, p: int):
    return pow(n, mod_inverse(p, n)) % n

def gcd(a: int, b: int):
    if a == 0:
        return b
    elif b == 0:
        return a
    else:
        return gcd(b, a % b)

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