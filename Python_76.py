```python
def is_simple_power(x, n):
    return x**n == n**int(x**(1/n))
```