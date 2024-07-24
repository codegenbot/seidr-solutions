def modp(n: int, p: int):
    if n == 1:
        return n
    elif p % 2 == 0:
        return (modp(n, p // 2) ** 2) % p
    else:
        return (n * modp(n, p - 1)) % p