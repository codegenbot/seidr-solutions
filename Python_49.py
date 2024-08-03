```
def modp(n: int, p: int):
    def extended_euclidean(a: int, b: int):
        if a == 0:
            return b, 0
        else:
            gcd, s = extended_euclidean(b % a, a)
            return gcd, s - (b // a) * s

    g, x = extended_euclidean(n, p)
    if g != 1:
        return None
    else:
        return pow(n, p - 2, p) * n % p if p > 1 else 0