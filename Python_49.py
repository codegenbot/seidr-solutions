def phi(n):
    res = n
    p = 2
    while p * p <= n:
        if not (n % p):
            while not (n % p):
                n //= p
            res -= res // p
        else:
            p += 1
    if n > 1:
        res -= res // n
    return res

def modp(n: int, p: int):
    if n < 1:
        return pow(n, p - 1, p)
    else:
        return pow(n, phi(n) % (p-1), p)