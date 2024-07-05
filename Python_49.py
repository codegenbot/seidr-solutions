def modp(n: int, p: int):
    if p == 2:
        return 1
    elif p == 3:
        return n % p
    else:
        if pow(2, (p - 1), p) == 1:
            return n ** ((p - 2) * (p - 1)) % p
        else:
            return pow(n, p - 2, p) * n % p