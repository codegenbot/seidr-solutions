def modp(n: int, p: int):
    def extended_euclidean(a, b):
        if a == 0:
            return b, 0, 1
        else:
            gcd, x, y = extended_euclidean(b % a, a)
            return gcd, y - (b // a) * x, x

    gcd, x, _ = extended_euclidean(p, n)
    if gcd != 1:
        return None
    else:
        return pow(n, p - 2, p) * n % p