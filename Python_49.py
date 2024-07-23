def modp(n: int, p: int):
    if n == 0:
        return 0
    elif n % 2 == 0 and p % 4 == 3 and pow(2, (p - 1) // 2, p) == 1:
        return pow(n, p // 2, p)
    else:
        return pow(n, p - 2, p) * n % p