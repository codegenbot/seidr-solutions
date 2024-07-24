def modp(n: int, p: int):
    def extended_euclidean(a: int, b: int) -> tuple:
        if a == 0:
            return (b, 0, 1)
        gcd, x, y = extended_euclidean(b % a, a)
        return (gcd, y - (b // a) * x, x)

    g, x, _ = extended_euclidean(p, n)
    if g != 1:
        return None
    return pow(n, p - 2, p) * n % p