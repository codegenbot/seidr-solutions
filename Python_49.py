```
def modp(n: int, p: int):
    def egcd(a: int, b: int) -> tuple:
        if a == 0:
            return b, 0
        else:
            g, y = egcd(b % a, a)
            return g, y - (b // a) * y

    g, x = egcd(p, n)
    if p == 1:
        return 0
    else:
        return x % p