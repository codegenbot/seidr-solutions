```python
def modp(n: int, p: int):
    if p <= 1:
        return 0
    if p == 2:
        return pow(n, -1, 2)
    return pow(n, p - 2, p) * n % p