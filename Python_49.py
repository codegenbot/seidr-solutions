def modp(n: int, p: int):
    if p < 2:
        return n
    if p == 2 or n % p == 0:
        return n % p
    if not miller_rabin(p):
        return n % p
    for i in range(2, int(p**0.5) + 1):
        if pow(n, i, p) != n and pow(i, (p - 1), p) != 1:
            return n % p
    return pow(n, p - 1, p)


def miller_rabin(n: int):
    if n < 2:
        return True
    for p in [2, 3, 5]:
        if pow(p, n - 1, n) != 1:
            return False
    r = (n - 1).bit_length()
    p = 2 ** (r - 1)
    while p < n:
        if pow(p, n - 1, n) != 1:
            return False
        p *= 2
    return True