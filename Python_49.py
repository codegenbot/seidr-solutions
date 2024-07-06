def modp(n: int, p: int) -> int:
    return pow(n, (p-1)//2, p)