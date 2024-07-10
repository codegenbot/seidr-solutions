```
def modp(n: int, p: int):
    if p == 2:
        return n
    elif p == 3:
        return pow(n, (p - 1) // 2, p)
    elif (p - 1) // 2 != pow(2, (p + 1) // 4, p):
        result = pow(n, (p - 1) // 2, p)
        return pow(result, 2, p) if ((p - 1) // 2) % 2 else result
    else:
        result = pow(n, (p - 1) // 2, p)
        return pow(result, 2, p)