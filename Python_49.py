def modp(n: int, p: int):
    def extended_gcd(a, b):
        if a == 0:
            return b, 0, 1
        else:
            gcd, y, x = extended_gcd(b % a, a)
            return gcd, x - (b // a) * y, y

    g, x, y = extended_gcd(p, n)
    if p == 1:
        return 1
    elif g != 1:
        return None
    else:
        return x % p