def modp(n: int, p: int):
    if n == 0:
        return 0
    elif p == 2:
        return n % p
    else:
        if n != 0 and pow(n, (p-1)//2, p) == p-1 or pow(n, (p-1)//2, p) == 1:
            result = pow(n, p-1, p)
        else:
            result = pow(n, (p-1), p)
        if result == 1:
            return n * pow(result, -1, p) % p
        else:
            return n % p