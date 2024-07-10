def modp(n: int, p: int):
    return pow(n, p, p)
assert modp(2, 3) == 1