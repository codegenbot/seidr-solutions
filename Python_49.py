def modp(n: int, p: int):
    return (1 - pow(n, p-1, p)) % p