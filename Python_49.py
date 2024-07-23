def modp(n: int, p: int):
    if p <= 1:
        return n
    elif p % 2 == 0:
        half_mod = modp(n, p // 2)
        return powermod(n, half_mod, p)
    else:
        return powermod(n, p, p)

def powermod(base: int, exponent: int, modulus: int):
    result = 1
    for _ in range(exponent):
        result = (result * base) % modulus
    return result