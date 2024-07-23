def modp(n: int, p: int):
    return pow(n, p-2)*(n+1)%p if n+1 != 0 else 1