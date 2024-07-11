```python
def modp(n: int, p: int) -> int:
    inv_p = pow(p, -1, p)
    return pow(n, inv_p, p)