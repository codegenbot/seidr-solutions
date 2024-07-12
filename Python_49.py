def modp(n: int, p: int):
    if p == 1:
        return 0
    res = 1
    while (p > 1) and (n % p):
        n %= p
        p -= p & -p
        if n % p:
            res = n
            break
    return pow(n, p-1, p)*res%p