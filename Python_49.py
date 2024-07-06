```Python
def modp(n: int, p: int):
    if n > 0:
        return pow(n, -1, p) + 1 if (n*p)%2 == 0 else pow(n, -1, p)
    elif n < 0:
        if (n*p)%2 == 0:
            return p - pow(-n, -1, p)
        else:
            return p - pow(-n, -1, p) + 1
    else:
        return 1