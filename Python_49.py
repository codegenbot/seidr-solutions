```
def modp(n: int, p: int):
    def extended_gcd(a, b):
        if a == 0:
            return (b, 0)
        else:
            g, y = extended_gcd(b % a, a)
            return (g, b // a - y * (b // a))

    g, x = extended_gcd(p, n)
    if p == 1:
        return n
    elif g != 1:
        return None
    else:
        return pow(n, p-2, p) * n % p