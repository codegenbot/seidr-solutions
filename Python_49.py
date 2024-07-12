```python
def power_mod(a: int, n: int, p: int):
    if n < 0:
        a = pow(a, -1, p)
    elif n > 1:
        a = (a * power_mod(a, n-1, p)) % p
    return a

def modp(n: int, p: int):
    if p == 0:
        raise ValueError("Modulus cannot be zero")
    result = power_mod(n, p, p)
    return result