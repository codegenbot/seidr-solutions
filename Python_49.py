```
def modp(n: int, p: int):
    def egcd(a: int, b: int) -> tuple:
        if a == 0:
            return b, 0, 1
        else:
            g, y, x = egcd(b % a, a)
            return g, x - (b // a) * y, y

    g, x, _ = egcd(p, n)
    if g != 1:
        return None
    return x % p