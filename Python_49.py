def modp(n: int, p: int):
    if n == 0:
        return 0
    elif p == 2:
        return n % p
    else:
        result = n if pow(n, (p-1), p) == 1 else (n * pow(n, p-2, p)) % p
        return result