```
def modp(n: int, p: int):
    def egcd(a, b):
        if a == 0:
            return b, 0, 1
        else:
            g, y, x = egcd(b % a, a)
            return g, x - (b // a) * y, y

    g, x, y = egcd(p, n)
    if p != 1:
        if g != 1:
            return None
        else:
            return x % p
    else:
        if n == 0:
            return 0
        else:
            return 1