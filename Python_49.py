```python
def modp(n: int, p: int):
    if p == 2:
        return n % p
    elif p == 3:
        return pow(n, (p - 1), p)
    else:
        return pow(n, p - 1, p) * pow(n, -1, p) % p