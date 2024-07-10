def modp(n: int, p: int):
    if n <= 0:
        return "Error: N must be greater than 0"
    return pow(n, p-2, p) * n % p