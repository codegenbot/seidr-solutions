```Python
def modp(n: int, p: int):
    if n > 0:
        return pow(n, (p-1)//2, p) * n % p
    else:
        return 1