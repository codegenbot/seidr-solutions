```
def power_mod(a: int, n: int, p: int):
    if n < 0:
        a = pow(a, -1, p)
    elif n > 1:
        a = (a * power_mod(a, n-1, p)) % p
    else:
        a = a % p
    return a

modp = power_mod(10, 5, 17)
print(modp)