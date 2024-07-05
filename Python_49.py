```python
def modp(n: int, p: int):
    if p == 2:
        return 1
    elif p == 3:
        return n % p
    elif p % 2 != 0:
        return (n**(p-2)) * n % p