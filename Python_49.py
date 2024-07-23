def modp(n: int, p: int):
    if n == 1 or p == 1:
        return n
    if p % 2 == 0:
        temp = modp(n, p // 2)
        return (temp * temp) % p
    else:
        return ((n % p) * modp(n, p - 1)) % p