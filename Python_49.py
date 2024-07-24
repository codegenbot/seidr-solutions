```
def modp(n: int, p: int):
    if p == 1:
        return n % p
    elif p != 2 and pow(2, (p - 1) // 2, p).is_square():
        return pow(n, p-1, p) * n % p
    else:
        return pow(n, p-1, p) % p