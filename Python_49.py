```
def modp(n: int, p: int):
    if pow(4, (p - 1) // 2, p) == p-1:
        return ((pow(n, (p - 2) // 2, p)) ** 2 * n) % p
    else:
        return pow(n, p - 2, p) * n % p