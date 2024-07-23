```
def powermod(base: int, exponent: int, modulus: int):
    if exponent == 0:
        return 1
    elif exponent % 2 == 0:
        half_power = powermod(base, exponent // 2, modulus)
        return (half_power * half_power) % modulus
    else:
        return (base * powermod(base, exponent - 1, modulus)) % modulus

def modp(n: int, p: int):
    if p <= 1:
        return n
    elif p % 2 == 0:
        half_mod = modp(-n if n < 0 else n, p // 2)
        return powermod(-n if n < 0 else n, half_mod, p)
    else:
        return powermod(-n if n < 0 else n, p, p)