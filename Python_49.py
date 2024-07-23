```
def modp(n: int, p: int):
    if n == 1:
        return 1
    elif n % 2 == 0:
        return modp(n // 2, p) * modp(n // 2, p) % p
    else:
        return (n * modp(n, p - 2, p)) % p