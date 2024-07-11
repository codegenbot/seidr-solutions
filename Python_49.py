```
def modp(n: int, p: int):
    if gcd(n, p) != 1:
        return None

    def extended_euclidean(a: int, b: int):
        if a == 0:
            return (b, 0)
        else:
            gcd, y = extended_euclidean(b % a, a)
            return (gcd, y - (b // a) * y)

    g, x = extended_euclidean(n, p)
    return pow(x, p - 2, p)

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    return a