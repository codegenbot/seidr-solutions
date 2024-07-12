```Python
def modp(n: int, p: int):
    if p == 0:
        raise ValueError("Modulus cannot be zero")
    result = power_mod(n, p)
    return result

def power_mod(a: int, n: int, p: int):
    if n < 1:
        return pow(a, n, p)
    else:
        half_power = power_mod(a, n // 2, p)
        if n % 2 == 0:
            return (half_power * half_power) % p
        else:
            return (a * half_power * half_power) % p

print(modp(2, 5))