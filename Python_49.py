def modp(n: int, p: int):
    if n == 1 or p == 2:
        return n
    if p % 2 == 0:
        half_power = pow(n, (p // 2) - 1, p)
        return ((half_power * half_power) % p) if p % 4 == 3 else modp(n, p % 2)
    return pow(n, p-1, p)