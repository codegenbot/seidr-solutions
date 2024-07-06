def modp(n: int, p: int):
    if n < 0:
        return modp(-n, p) % p
    if p == 2:
        return n % p
    if n == 0:
        return 0
    if n == 1 or p == 1:
        return n

    if n > p:
        return modp(n % p, p)

    if pow(n, (p-1)//2, p) == p-1:
        return n % p

    for i in range(2, p):
        if pow(n, i*p - i, p) == 1:
            return n % p

    return n