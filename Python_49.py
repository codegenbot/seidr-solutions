```
def powermod(base: int, exponent: int, modulus: int):
    result = 1
    base = base % modulus
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        exponent = exponent // 2
        base = (base * base) % modulus
    return result

def modp(n: int, p: int):
    if p <= 1:
        return n
    elif p % 2 == 0:
        half_mod = modp(-n if n < 0 else n, p // 2)
        return powermod(-n if n < 0 else n, half_mod, p)
    else:
        return powermod(-n if n < 0 else n, p, p)