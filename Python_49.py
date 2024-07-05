def modp(n: int, p: int):
    if p == 2:
        return 1
    elif p == 3:
        return n % p
    else:
        return pow(n, p-1, p) * n % p