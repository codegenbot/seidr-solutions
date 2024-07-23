def modp(n: int, p: int):
    return pow(n, p-2)*pow(n+1, p-2)%p if n != p-1 else 1