```
def power_mod(a: int, n: int, p: int):
    if n < 0:
        a = pow(a, -1, p)
    elif n % 2 == 0:  
        temp = power_mod(a, n // 2, p)
        return (temp * temp) % p
    else:  
        return (a * power_mod(a, n - 1, p)) % p

def modp(n: int, p: int):
    if p == 0:
        raise ValueError("Modulus cannot be zero")
    result = power_mod(n, p, p)
    return result