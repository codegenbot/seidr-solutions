```python
```python
def modp(n: int, p: int) -> int:
    if p == 0:
        return 1
    elif p % 2 == 0:
        half_pow = modp(n, p // 2)
        return (n * half_pow * half_pow) % p
    else:
        return (n * modp(n, p - 1)) % p
```