def modp(n: int, p: int):
    if pow(n, (p-1)//2, p) == pow(1, (p-1)//2, p):
        return pow(n, p - 1, p)
    else:
        return pow(n, (p-4)//2, p)