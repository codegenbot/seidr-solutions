```
def modp(n: int, p: int):
    if math.gcd(n, p) == 1:
        return pow(n, p-2, p)
    else:
        return 0