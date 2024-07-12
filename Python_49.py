```Python
def modp(n: int, p: int):
    if n % p == 0:
        return 0
    else:
        return n % p