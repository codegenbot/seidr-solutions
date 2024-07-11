```Python
def extended_gcd(a, b):
    if a == 0:
        return b, 0, 1
    else:
        gcd, x, y = extended_gcd(b % a, a)
        return gcd, y - (b // a) * x, x

def modp(n: int, p: int):
    gcd_p, inv_p, _ = extended_gcd(p, p)
    if gcd_p == 1:
        return pow(n, inv_p, p)
    else:
        return None

print(modp(31, 5))