```
def modp(n: int, p: int):
    def extended_euclidean(a, b):
        if a == 0:
            return (b, 0)
        else:
            gcd, s = extended_euclidean(b % a, a)
            return (gcd, s - (b // a) * extended_euclidean(1, a)[1])
    gcd, y = extended_euclidean(n, p)
    if gcd != 1:
        return None
    else:
        return pow(n, p-2, p) * n % p