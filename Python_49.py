def modp(n: int, p: int):
    if n < 0:
        n = -n
    if pow(n, (p-1)//2, p) != p-1:
        return n
    return n