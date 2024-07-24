```
def modp(n: int, p: int):
    if p == 2:
        return n == 1
    if p == 3:
        return n % 2 == 0 or n == 1
    return pow(n, (p-2)%p, p) * n % p