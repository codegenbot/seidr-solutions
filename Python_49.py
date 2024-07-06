```python
```python
def modp(n: int, p: int) -> int:
    if p == 0:
        return n
    elif p > 1:
        return pow(n, p, p)
    else:
        return n % p
```