```python
```python
def modp(n: int, p: int) -> int:
    if p == 0:
        return n
    else:
        return pow(n, p, p)
```