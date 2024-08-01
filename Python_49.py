```
def modp(n: int, p: int):
    if n <= 0:
        if pow(n, (p-1)//2, p) == p-1:
            return -1
        else:
            return 1
    return pow(n, p - 2, p) * n % p if p > 1 else 1