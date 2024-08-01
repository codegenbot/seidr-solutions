```
def modp(n: int, p: int):
    def getModInverse(a: int, m: int):
        if math.gcd(a, m) != 1:
            return None
        return pow(a, -1, m)

    inv = getModInverse(n, p)
    return pow(n, p - 2, p) * n % p if inv else 0