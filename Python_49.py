```
def modp(n: int, p: int):
    if p == 2 or p == 3:
        return pow(n, p - 1, p)
    else:
        if p % 2 == 0:
            return (modp(n, p // 2) ** 2) % p
        else:
            return ((n % p) * modp((n * n) % p, p-2)) % p