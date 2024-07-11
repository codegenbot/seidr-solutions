```
def modp(n: int, p: int):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return pow(n, p-2, p) * n % p