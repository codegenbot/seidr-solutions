```Python
def modp(n: int, p: int):
    if n < 2 and p > 1:
        return 1
    if p == 2 or n % p == 0:
        return n % p
    return pow(n, p - 2, p) * n % p