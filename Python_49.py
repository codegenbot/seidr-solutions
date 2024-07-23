```
def modp(n: int, p: int):
    if n == 1:
        return n
    elif n % 2 == 0:
        return modp(n // 2, p) ** 2 % p
    else:
        return (n * modp(n, p - 2) % p + p) % p