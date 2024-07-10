```
def modp(n: int, p: int):
    if n < 0:
        n += p
    elif p == 1:
        return 0
    elif p % 2 == 0:
        half = modp(n, p // 2)
        return (n * half) % p
    else:
        return (n % p)