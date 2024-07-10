```
def modp(n: int, p: int):
    if n >= 0:
        res = pow(n, p-1, p)
        return res + p if res == 1 else n
    else:
        return modp(-n, p)