def modp(n: int, p: int):
    if p == 0:
        return 1
    elif p % 2 == 0:
        half_power = modp(n, p // 2)
        return (half_power * half_power) % p
    else:
        return (n * modp(n, p - 1)) % p