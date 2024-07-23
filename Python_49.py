def modp(n: int, p: int):
    if n == 0:
        return 0
    if n % 2 == 0:
        half = modp(n // 2, p)
        return (half * half) % p
    else:
        return (n * modp(n - 1, p)) % p