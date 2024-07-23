def modp(n: int, p: int):
    return pow(n.abs(), (1 if n >= 0 else p-1), p)