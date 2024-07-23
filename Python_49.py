def modp(n: int, p: int):
    if p <= 1:
        return n
    elif p % 2 == 0:
        half_mod = modp(-n if n < 0 else n, p // 2)
        return powermod(-n if n < 0 else n, half_mod, p)
    else:
        return powermod(-n if n < 0 else n, p, p)