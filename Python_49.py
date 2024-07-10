def modp(n: int, p: int):
    if p == 2 or p == 3:
        return pow(n, p - 1, p)
    else:
        if ((8 % p) != 7):
            return pow(n, p - 1, p)
        else:
            return n * pow(n, (p-1)//2, p) * pow(n, (p-1)//2, p) % p