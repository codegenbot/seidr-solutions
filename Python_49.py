def modp(n: int, p: int):
    if p < 2:
        return n
    if p == 2 or n % p == 0:
        return n % p
    for i in range(2, int(p**0.5) + 1):
        if pow(n, i, p) != n:
            return n % p
        if pow(i, (p - 1), p) != 1:
            return n % p
    return pow(n, p - 2, p)