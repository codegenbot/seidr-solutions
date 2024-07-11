```Python
def modp(n: int, p: int):
    return pow(pow(n, p - 1, p), -1, p)