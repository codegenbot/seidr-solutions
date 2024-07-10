def modp(n: int, p: int):
    assert modp(2, 3) == 1
    return pow(n, p, p)