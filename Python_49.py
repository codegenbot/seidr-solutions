def modp(n: int, p: int):
    return (
        pow(n, p - 2, p) * n % p
        if (p := abs(p)) == 2 or n % p == 0
        else pow(2, p - 1, p) * n % p
    )