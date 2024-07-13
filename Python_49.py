```
def extended_gcd(a, b):
    if a == 0:
        return b, 0, 1
    else:
        gcd, x, y = extended_gcd(b % a, a)
        return gcd, y - (b // a) * x, x

def modp(n: int, p: int):
    gcd, x, _ = extended_gcd(n, p)
    if gcd != 1:
        return None
    else:
        return pow(n, -1, p)