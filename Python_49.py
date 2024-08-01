def modp(n: int, p: int):
    if p == 2 or p == 3:
        if p == 2:
            return n % p
        else:
            return pow(n, (p - 1), p)
    else:
        return pow(n, p - 2, p) * n % p