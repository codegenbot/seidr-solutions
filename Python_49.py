def modp(n: int, p: int):
    if n == 0:
        return 0
    elif p == 2:
        return n
    else:
        result = pow(n, p-1, p)
        if result == 1:
            return n
        for _ in range(2, p):
            result = (result * n) % p
        return result