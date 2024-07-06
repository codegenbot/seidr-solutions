def modp(n: int, p: int):
    if p == 1:
        return 0
    res = pow(n, p // 2, p)
    if p % 2 == 0:
        return (res * res) % p
    else:
        return (n * res * res) % p