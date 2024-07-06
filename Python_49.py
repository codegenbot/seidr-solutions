```python
```python
def modp(n: int, p: int) -> int:
    if p == 0:
        return n
    elif p < 0:
        return modp(n, -p)
    else:
        return pow(n, p, p)
```