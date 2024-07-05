```python
def modp(n: int, p: int):
    if p == 2:
        return n % p
    elif p == 3:
        return n % p
    else:
        return pow(n, p - 1, p) * n % p if math.gcd(n, p) == 1 else None