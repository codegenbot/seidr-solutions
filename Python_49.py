def modp(n: int, p: int):
    if n < 1:
        return pow(0, p-2, p)
    elif n == 1:
        return 1
    else:
        return pow(n, p - 1, p)