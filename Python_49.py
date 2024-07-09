def modp(n: int, p: int):
    for i in range(2, p):
        if (n * i) % p == 1:
            return i
    return -1