```
def modp(n: int, p: int):
    def extended_euclidean(a: int, b: int):
        if a == 0:
            return (b, 0)
        else:
            gcd, y = extended_euclidean(b % a, a)
            return (gcd, b - y * (a // gcd))

    gcd, x = extended_euclidean(n, p)
    if p != 1 and gcd > 1:
        return None
    else:
        return pow(n, x, p)